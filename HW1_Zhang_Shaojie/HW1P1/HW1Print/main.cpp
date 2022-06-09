 //
//  main.cpp
//  HW1Print
//
//  Created by Carter Zhang on 9/3/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;
string read_username(string msg);
int read_integer(string msg);
int add_two_integers(int x, int y);
double divided_two_integers(int x, int y);
int multiply_two_integers(int x, int y);
int sqsum_two_integers(int x, int y);

int main() {
    string name;
    name = read_username("input your name ");
    
    int ix, iy;
    ix = read_integer("input the first numnber ");
    iy = read_integer("input the second number ");
    
    int sum;
    sum = add_two_integers(ix, iy);
    
    double ratio;
    ratio = divided_two_integers(ix, iy);
    
    int product;
    product = multiply_two_integers(ix, iy);
    
    int sqsm;
    sqsm = sqsum_two_integers(ix, iy);
    
    cout <<"Hello "<<name<< ",\n";
    cout <<"the sum of "<< ix << " and " << iy << " is " <<sum<< ";\n";
    cout <<"the ratio of "<< ix << " and " << iy << " is " <<ratio<< ";\n";
    cout <<"the product of "<< ix << " and " << iy << " is " <<product<< ";\n";
    cout <<"the square sum of "<< ix << " and " << iy << " is " <<sqsm<< ".\n";
    
    return 0;
}

string read_username(string msg)
{
    cout << msg;
    string name;
    cin >> name;
    return name;
}

int read_integer(string msg)
{
    cout << msg;
    int x;
    cin >> x;
    return x;
}

int add_two_integers(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

double divided_two_integers(int x, int y)
{
    double ix = x;
    double iy = y;
    double ratio;
    ratio = ix/iy;
    return ratio;
}

int multiply_two_integers(int x, int y)
{
    int product;
    product = x * y;
    return product;
}

int sqsum_two_integers(int x, int y)
{
    int sqsm;
    sqsm = x*x + y*y;
    return sqsm;
}
