//
//  flyingObject.cpp
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#include "flyingObject.h"
#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

#include <cassert>

/**************************************************************************
 * Constructor. Takes 4 values for point and velocity, then sets them.
 **************************************************************************/
FlyingObject :: FlyingObject(int x, int y, int Dx, int Dy)
{
    // default to object being alive
    setAlive(true);
    
    // Set the x and y for point and velocity
    point.setX(x);
    point.setY(y);
    
    velocity.setDx(Dx);
    velocity.setDy(Dy);
}

/**************************************************************************
 * Kill the object
 **************************************************************************/
void FlyingObject :: kill()
{
    this->alive = false;
}

/**************************************************************************
 * Set the point
 **************************************************************************/
void FlyingObject :: setPoint(Point & point)
{
    this->point = point;
}

/**************************************************************************
 * Set the velocity
 **************************************************************************/
void FlyingObject :: setVelocity(Velocity & velocity)
{
    this->velocity = velocity;
}

/**************************************************************************
 * Move the object
 **************************************************************************/
void FlyingObject :: advance()
{
    point.addX(velocity.getDx());
    point.addY(velocity.getDy());
}

/**************************************************************************
 * Set the alive value
 **************************************************************************/
void FlyingObject :: setAlive(bool alive)
{
    this->alive = alive;
}
