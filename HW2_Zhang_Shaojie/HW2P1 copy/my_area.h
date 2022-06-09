//
//  my_area.h
//  HW2P1
//
//  Created by Carter Zhang on 9/9/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//



#ifndef my_area_h
#define my_area_h

#include <iostream>
using namespace std;
#define PI 3.1416

double area(double radius);

double area(double width, double length);

double area(double side1, double side2, double radians);

double area(float radius);

double area(long double edge);


#ifndef my_area_CPP
#include "my_area.cpp"
#endif

#endif /* my_area_h */
