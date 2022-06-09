//
//  main.cpp
//  HW2P1
//
//  Created by Carter Zhang on 9/9/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include <iostream>
using namespace std;
#include "my_area.h"


int main() {
    double circle_area;
    double radius1 = 2.5;
    circle_area = area(radius1);
    
    double sphere_area;
    float radius2 = 1;
    sphere_area = area(radius2);
    
    double rect_area;
    double length = 2.5, width = 1.5;
    rect_area = area(width, length);
    
    double trian_area;
    double side1 = 1, side2 = 1, radians = PI/3;
    trian_area = area(side1, side2, radians);
    
    cout << "The area of a circle with radius 2.5 is " << circle_area << ",\n";
    cout << "The area of a unit sphere is " << sphere_area << ",\n";
    cout << "The area of a 1.5 by 2.5 rectangle is " << rect_area << ",\n";
    cout << "The area of an equilateral triangle with side length of 1 is " << trian_area << ".\n";
    
    return 0;
}
