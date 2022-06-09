//
//  main.cpp
//  HW7
//
//  Created by Carter Zhang on 10/20/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
#include <fstream>


// a
double* MatVecMult(double **mat,int n1, int n2, double const *vec, int k) {
    if (n2 != k) {
        return nullptr;
    }
    double * result = new double [n1];
    for (int i = 0; i < n1; ++i) {
        double rowprod= 0;
        for (int j = 0; j < n2; ++j) {
            rowprod += mat[i][j] * vec[j];
        }
        result[i] = rowprod;
    }
    return result;
}


//b
double **getMat(double **mat, int n, int i) {
    double **newM = new double * [n-1];
    for (int q = 0; q < (n-1); ++q) {
        newM[q] = new double [n-1];
    }
    for (int j = 1; j < n; ++j) {
        for (int k = 0; k < i; ++k) {
            newM[j-1][k] = mat[j][k];
        }
        for (int k = i+1; k < n; ++k) {
            newM[j-1][k-1] = mat[j][k];
        }
    }
    return newM;
}

double det(double **mat, int n) {
    double deter = 0;
    if (n == 2) {
        deter = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    }
    else {
        for (int i = 0; i < n; ++i) {
            double **newmat = getMat(mat, n, i);
            deter += pow((-1), i) * det(newmat, n-1) * mat[0][i];
            for (int j = 0; j < n-1; ++j) {
                delete [] newmat[j];
            }
            delete []newmat;
        }
    }
    return deter;
}


//c
double *getCol(double **mat2, int row2, int i) {
    double *result = new double [row2];
    for (int k = 0; k < row2; ++k) {
        result[k] = mat2[k][i];
    }
    return result;
}

bool MatrixMult(double **mat1, int row1, int col1, double **mat2, int row2, int col2, double **prod) {
    if (col1 != row2) {
        return false;
    }
    else {
        for (int i = 0; i < col2; ++i) {
            double * ithcol = getCol(mat2, row2, i);
            double * ithcolforprod = MatVecMult(mat1, row1, col1, ithcol, row2);
            delete []ithcol;
            // put this col in the desired places for prod
            for (int j = 0; j < row1; ++j) {
                prod[j][i] = ithcolforprod[j];
            }
            delete []ithcolforprod;
        }
        return true;
    }
}

// main
int main() {
    
    // a
    double **mat = new doub le *[2];
    mat[0] = new double [3] {-1, 4.5, 6.2};
    mat[1] = new double [3] {2, -3.4, -2};
    int n1 = 2;
    int n2 = 3;
    double v1[2] {7, -1.2};
    int k1 = 2;
    double v2[3] {1, 2, 1.5};
    int k2 = 3;
    double * result1 = MatVecMult(mat, n1, n2, v1, k1);
    if (result1 == nullptr) {
        cout << "There's a dimension error." << endl;
    }
    delete [] result1;
    double * result2 = MatVecMult(mat, n1, n2, v2, k2);
    for (int i = 0; i < n1; ++i) {
        cout << result2[i] << " ";
    }
    cout << endl;
    // Need to write to an output file!
    ofstream outfile1("output.txt");
    outfile1 << "m and v1 multiplication has a dimension error" << endl;
    outfile1 << "m and v2 multiplication output is: " << endl;
    for (int i = 0; i < n1; ++i) {
        outfile1 << result2[i] << " ";
    }
    outfile1 << endl;
    delete [] result2;
    delete [] mat[0];
    delete [] mat[1];
    delete []mat;
    
    //b
    double **mat0 = new double * [3];
    mat0[0] = new double [3] {2, -3, 1};
    mat0[1] = new double [3] {2, 0, -1};
    mat0[2] = new double [3] {1, 4, 5};
    double deter = det(mat0, 3);
    delete [] mat0[0];
    delete [] mat0[1];
    delete [] mat0[2];
    delete []mat0;
    cout << "Determinant is " << deter << endl;
    // Need to write to an output file!
    outfile1 << "The determinant of the matrix is: " << endl;
    outfile1 << deter << endl;
    
    //c
    double **mat1 = new double * [3];
    mat1[0] = new double [3] {2, -3, 1};
    mat1[1] = new double [3] {2, 0, -1};
    mat1[2] = new double [3] {1, 4, 5};
    double **mat2 = new double * [2];
    mat2[0] = new double [3] {-1, 4.5, 6.2};
    mat2[1] = new double [3] {2, -3.4, -2};
    double **prod1 = new double * [3];
    prod1[0] = new double [3];
    prod1[1] = new double [3];
    prod1[2] = new double [3];
    bool a = MatrixMult(mat1, 3, 3, mat2, 2, 3, prod1);
    cout << "First multiplication " << a << endl;
    outfile1 << "First multiplication is false" << endl;
    
    delete [] mat1[0];
    delete [] mat1[1];
    delete [] mat1[2];
    delete []mat1;
    delete [] mat2[0];
    delete [] mat2[1];
    delete []mat2;
    delete [] prod1[0];
    delete [] prod1[1];
    delete [] prod1[2];
    delete []prod1;
    
    double **mat3 = new double * [2];
    mat3[0] = new double [3] {-1, 4.5, 6.2};
    mat3[1] = new double [3] {2, -3.4, -2};
    double **mat4 = new double * [3];
    mat4[0] = new double [3] {2, -3, 1};
    mat4[1] = new double [3] {2, 0, -1};
    mat4[2] = new double [3] {1, 4, 5};
    double **prod2 = new double * [2];
    prod2[0] = new double [3];
    prod2[1] = new double [3];
    bool b = MatrixMult(mat3, 2, 3, mat4, 3, 3, prod2);
    cout << "Second multiplication " << b << endl;
    // Need to write to an output file!
    outfile1 << "Second multiplication is true: " << endl;
    for (int i=0; i<2; ++i) {
        for (int j = 0; j<3; ++j) {
            outfile1 << prod2[i][j] << " ";
        }
        outfile1 << endl;
    }
    
    delete [] mat3[0];
    delete [] mat3[1];
    delete []mat3;
    delete [] mat4[0];
    delete [] mat4[1];
    delete [] mat4[2];
    delete []mat4;
    delete [] prod2[0];
    delete [] prod2[1];
    delete []prod2;
    
    return 0;
}
