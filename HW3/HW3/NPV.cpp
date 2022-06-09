//
//  NPV.cpp
//  HW3
//
//  Created by Carter Zhang on 9/17/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include "NPV.hpp"
#include <math.h>

double gRiskFreeRate = 0;

double riskfree_NPV(double N, double T)
{
    double npv;
    npv = N / exp(gRiskFreeRate * T);
    return npv;
}

double risky_NPV(double N, double T, double a)
{
    double npv;
    double newRate = gRiskFreeRate + a;
    npv = N / exp(newRate * T);
    return npv;
}


