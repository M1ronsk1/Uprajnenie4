//
//  Ship.cpp
//  Uprajnenie4
//
//  Created by Miroslav Vatev on 14/4/16.
//  Copyright © 2016 Miroslav Vatev. All rights reserved.
//

#include "Ship.h"

Ship::Ship()
{}
///Testov komentar 2
Ship::Ship(double x, double y):x_(3.3),y_(5.5)
{}


Ship:: ~Ship()
{}
double Ship::Getx()
{
    return x_;
}

double Ship::Gety()
{
    return y_;
}
    
void Ship::Setx( double x)
{
    x_=x;
}
void Ship::Sety( double y)
{
    y_=y;
}
    
