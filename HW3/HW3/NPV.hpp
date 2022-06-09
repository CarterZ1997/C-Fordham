//
//  NPV.hpp
//  HW3
//
//  Created by Carter Zhang on 9/17/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#ifndef NPV_hpp
#define NPV_hpp

#include <iostream>
using namespace std;

extern double gRiskFreeRate;

double riskfree_NPV(double, double);

double risky_NPV(double, double, double);

#endif /* NPV_hpp */
