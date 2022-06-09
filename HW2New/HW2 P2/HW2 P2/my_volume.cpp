//
//  my_volume.cpp
//  HW2 P2
//
//  Created by Carter Zhang on 9/9/19.
//  Copyright © 2019 Carter Zhang. All rights reserved.
//

#include "/Users/carterz/Desktop/HW2P1/HW2P1/my_area.h"
#include "my_volume.h"
#include <math.h>


double volume(float radius1) //sphere
{
    double vol;
    vol = 4 * PI/3 * radius1 * radius1;
    return vol;
}


double volume(double side) //cube
{
    double vol;
    vol = pow(side, 3);
    return vol;
}


double volume(double radius2, double height) //cylinder
{
    double vol;
    double circlearea;
    circlearea= area(radius2);
    vol = circlearea * PI * height;
    return vol;
}


double volume(double side1, double side2, double side3) //prism
{
    double vol;
    vol = side1 * side2 * side3;
    return vol;
}
