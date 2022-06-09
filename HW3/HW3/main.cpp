//
//  main.cpp
//  HW3
//
//  Created by Carter Zhang on 9/17/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;
#include "NPV.hpp"


int main() {
    
    gRiskFreeRate = 0.035;
    double rfnpv = riskfree_NPV(1000,1.5);
    double rnpv = risky_NPV(1000,1.0,0.15);
    
    cout << "Risk free NPV of a cash paymebnt of $1000 in 1.5 years of time is " << rfnpv << ", \n";
    cout << "Risky NPV of a cash paymebnt of $1000 in 1.5 years of time with alpha 0.035 is " << rnpv << ". \n";
    
    return 0;
}
