//
//  main.cpp
//  Uprajnenie4
//
//  Created by Miroslav Vatev on 14/4/16.
//  Copyright © 2016 Miroslav Vatev. All rights reserved.
//

#include <iostream>
#include "Shuttle.h"
#include "Ship.h"
using namespace std;

int main()
{
    
    Ship* sh= new Shuttle(5.3,6.7);
    Shuttle* sh1= new Shuttle(5.7, 9.9);
    Shuttle* sh2 = new Shuttle(*sh1);
    sh->area();
     cout<<endl;
    sh1->area();
    cout<<endl;
    sh2->area();
    cout<<endl;
    return 0;
    
}
