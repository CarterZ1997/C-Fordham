//
//  main.cpp
//  HW4
//
//  Created by Carter Zhang on 9/24/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

int sum_of_digits(int x){
    if (x < 0)
        x = -x;
    if (x<10)
        return x;
    return x%10 + sum_of_digits(x/10);
}

double golden_mean_ratio(int n){
    if (n == 1)
        return float(1)/float((1+n));
    
    return float(1)/float((1+golden_mean_ratio(n-1)));
}


int main() {
    cout << "sum of digits of 35 is " << sum_of_digits(35) << endl;
    cout << "golden_mean_ratio of level 3 is " << golden_mean_ratio(3) << endl;
    return 0;
}
