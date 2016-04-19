//
//  Shuttle.cpp
//  Uprajnenie4
//
//  Created by Miroslav Vatev on 14/4/16.
//  Copyright © 2016 Miroslav Vatev. All rights reserved.
//

#include "Shuttle.h"

Shuttle::Shuttle(double x, double y)
{
    x_=x;
    y_=y;
}
Shuttle::Shuttle()
{}

void Shuttle::area()
{
     cout<<"Area is: "<<x_*y_;
}

Shuttle::~Shuttle()
{}
