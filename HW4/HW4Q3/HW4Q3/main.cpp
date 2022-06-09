//
//  main.cpp
//  HW4Q3
//
//  Created by Carter Zhang on 9/25/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

void move_rings(int n, char from, char to, char spare){
    if (n==1) {
        cout << "Move from " << from << " to " << to << endl;
        return;
    }
    else {
        move_rings(n-1, from, spare, to);
        cout << "Move from " << from << " to " << to << endl;
        move_rings(n-1, spare, to, from);
    }
}

int main() {
    int n;
    cout << "input a positive integer, human: " << endl;
    cin >> n;
    
    char from = 'A';
    char to = 'C';
    char spare = 'B';
    
    move_rings(n, from, to, spare);
    
    return 0;
}
