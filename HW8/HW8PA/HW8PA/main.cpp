//
//  main.cpp
//  HW8PA
//
//  Created by Carter Zhang on 11/5/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cmath>

using yourTypeName = double (*)(double);

double func1(double x) {
    return exp(x) - x*x;
}

double func2(double x) {
    return -2*x - log(x);
}

double func3(double x) {
    return cos(x) * cos(x) + x;
}

double func1p(double x) {
    return exp(x) - 2*x;
}

double func2p(double x) {
    return -2-1/x;
}

double func3p(double x) {
    return 1-2*cos(x)*sin(x);
}

yourTypeName selectFunc(const int func) {
    switch(func) {
        case 1: return func1;
        case 2: return func2;
        default: return func3;
    }
}
    
yourTypeName selectFuncP(const int func) {
    switch(func) {
        case 1: return func1p;
        case 2: return func2p;
        default: return func3p;
    }
}
    
double NewtonRaphson(yourTypeName op, yourTypeName op1, double x0, double prec) {
    double x1 = x0 - op(x0)/op1(x0);
    while (abs(x1-x0) > prec) {
        x0 = x1;
        x1 = x0 - op(x0)/op1(x0);
    }
    return x1;
}

int main() {
    double result;
    for (int i = 1; i < 4; ++i) {
        yourTypeName op = selectFunc(i);
        yourTypeName op1 = selectFuncP(i);
        result = NewtonRaphson(op, op1, 1, 0.0001);
        cout << result << endl;
    }
    return 0;
}

