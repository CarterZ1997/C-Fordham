//
//  main.cpp
//  HW8PB
//
//  Created by Carter Zhang on 11/5/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cmath>

double f1(double x, double y) {
    return x*x + y*y + 6*x*x*y*y;
}

double f2(double x, double y) {
    return x*y*(x-y);
}

using yourTypeName = double (*)(double, double);

double fx2(double x, double y, yourTypeName f) {
    double result;
    double d = 0.0001;
    result = (f(x+d, y) + f(x-d, y) - 2*f(x, y)) / (d*d);
    return result;
}

double fy2(double x, double y, yourTypeName f) {
    double result;
    double d = 0.0001;
    result = (f(x, y+d) + f(x, y-d) - 2*f(x, y)) / (d*d);
    return result;
}

double fxy(double x, double y, yourTypeName f) {
    double result;
    double d = 0.0001;
    result = (f(x+d, y+d) + f(x-d, y-d) - f(x+d, y-d) - f(x-d, y+d)) / (4*d*d);
    return result;
}

int main() {
    double x = 0;
    double y = 0;
    cout << "With (0, 0): f1 " << endl;
    cout << fx2(x,y,f1) << " " << fxy(x,y,f1) << endl;
    cout << fxy(x,y,f1) << " " << fy2(x,y,f1) << endl;
    
    cout << "f2" << endl;
    cout << fx2(x,y,f2) << " " << fxy(x,y,f2) << endl;
    cout << fxy(x,y,f2) << " " << fy2(x,y,f2) << endl;
    
    x = 1;
    y = 1;
    cout << "With (1, 1): f1 " << endl;
    cout << fx2(x,y,f1) << " " << fxy(x,y,f1) << endl;
    cout << fxy(x,y,f1) << " " << fy2(x,y,f1) << endl;
    
    cout << "f2" << endl;
    cout << fx2(x,y,f2) << " " << fxy(x,y,f2) << endl;
    cout << fxy(x,y,f2) << " " << fy2(x,y,f2) << endl;
    
    return 0;
}
