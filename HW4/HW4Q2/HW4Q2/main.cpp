//
//  main.cpp
//  HW4Q2
//
//  Created by Carter Zhang on 9/24/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;
int z = 1;

int main() {
    
    while (z) {
        char boo;
        
        cout << "Do you wanna play(Y/N)?" << endl;
        cin >> boo;
        
        switch (boo){

            case('y'):
            case('Y'):{
                int x;
                cout << "Input a positive integer: \n";
                cin >> x;
                while (x < 1){
                    cout << "Try again: ";
                    cin >> x;
                }
                int orig = x;
                
                int steps = 0;
                while (x != 1){
                    int mod = x%2;
                    
                    switch(mod){
                        case(0):
                            x = x/2;
                            break;
                        case(1):
                            x = 3 * x + 1;
                            break;
                    }
                    steps = steps + 1;
                }
                cout << "It took "<< steps << " steps to reduce " << orig << " to 1" << endl;
                break;}
                
            default:
                cout << "Oops, you are out :)" << endl;
                z = 0;
        }
    }
    return 0;
}
