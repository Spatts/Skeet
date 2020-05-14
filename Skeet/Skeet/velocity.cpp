//
//  velocity.cpp
//  MoonLander
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#include "velocity.h"

/*********************************************
 * Default Constructor.
 *********************************************/
Velocity :: Velocity()
{
    setDx(0.0);
    setDy(0.0);
}

/*********************************************
 * Non-default constructor.
 *********************************************/
Velocity :: Velocity(float x, float y)
{
    setDx(x);
    setDy(y);
}

/*********************************************
 * Set velocity x coordinate
 *********************************************/
void Velocity :: setDx(float x)
{
    Dx = x;
    
}

/*********************************************
 * Set velocity y coordinate
 *********************************************/
void Velocity :: setDy(float y)
{
    Dy = y;
}
