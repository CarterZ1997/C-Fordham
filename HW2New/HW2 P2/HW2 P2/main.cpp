//
//  main.cpp
//  HW2 P2
//
//  Created by Carter Zhang on 9/9/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;
#include "my_volume.h"


int main() {
    
    double sphere_volume;
    float radius1 = 1;
    sphere_volume = volume(radius1);
    
    double cube_volume;
    double side = 2.5;
    cube_volume = volume(side);
    
    double cyl_volume;
    double radius2 = 1;
    int height = 4;
    cyl_volume = volume(radius2, height);
    
    double prism_volume;
    double side1 = 2.5, side2 = 4.2, side3 = 6;
    prism_volume = volume(side1, side2, side3);
    
    cout << "The volume of a unit sphere is " << sphere_volume << ",\n";
    cout << "The volume of a cube with edge length 2.5 is " << cube_volume << ",\n";
    cout << "The volume of a cylinder with radius 1 and height 4 is " << cyl_volume << ",\n";
    cout << "The volume of a rectangular prism 2.5 by 4.2 by 6 is " << prism_volume << ".\n";
    
    return 0;
}
