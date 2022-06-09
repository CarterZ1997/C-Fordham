//
//  my_area.cpp
//  HW2P1
//
//  Created by Carter Zhang on 9/9/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#ifndef my_area_CPP
#define my_area_CPP

//#include "my_area.h"
#include <math.h>


double area(double radius) //circle
{
    double area;
    area = PI * radius * radius;
    return area;
}


double area(double width, double length) //rect
{
    double area;
    area = width * length;
    return area;
}


double area(double side1, double side2, double radians) //trian
{
    double area;
    area = sin(radians) * side1 * side2 * 0.5;
    return area;
}


double area(float radius) //sphere
{
    double area;
    area = PI * 4 * radius * radius;
    return area;
}


double area(long double edge) //cube
{
    double area;
    area = edge * edge * 6;
    return area;
}

#endif
