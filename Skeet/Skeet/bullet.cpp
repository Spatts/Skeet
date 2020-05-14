//
//  bullet.cpp
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#include "bullet.h"
#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "uiDraw.h"
#include <cmath>

#include <cassert>

#define BULLET_SPEED 10.0

/**************************************************************************
 * Constructor. Setting the flying object values to default 0.
 **************************************************************************/
Bullet :: Bullet() : FlyingObject(0, 0, 0, 0)
{
    
}

/**************************************************************************
 * Draw the bullet
 **************************************************************************/
void Bullet :: draw() const
{
    drawDot(getPoint());
}

/**************************************************************************
 * Fire a bullet.
 **************************************************************************/
void Bullet :: fire(const Point & p, float angle)
{
    // Set bullet x and y to whatever was passed by rifle
    point.setX(p.getX());
    point.setY(p.getY());
    
    // Checks
    assert(point.getX() >= -200 && point.getX() <= 200);
    assert(point.getY() >= -200 && point.getY() <= 200);
    
    // Set x and y of velocity
    velocity.setDx(BULLET_SPEED * (-cos(M_PI / 180.0 * angle)));
    velocity.setDy(BULLET_SPEED * (sin(M_PI / 180.0 * angle)));
}
