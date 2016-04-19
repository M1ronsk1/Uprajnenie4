//
//  Shuttle.hpp
//  Uprajnenie4
//
//  Created by Miroslav Vatev on 14/4/16.
//  Copyright © 2016 Miroslav Vatev. All rights reserved.
//
#include "Ship.h"
#ifndef Shuttle_h
#define Shuttle_h

#include <stdio.h>


class Shuttle:public Ship
{
public:
    Shuttle();
    
    Shuttle(double x, double y);
    ~Shuttle();
    void area();
 
};


#endif



#endif /* Shuttle_hpp */
