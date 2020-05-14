//
//  ToughBird.cpp
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#include "toughBird.h"
#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "bird.h"

#include <cassert>

#define RADIUS 15    // used to draw circle

/**************************************************************************
 * Default constructor. Inherits from bird but overrides
 * with slower velocity and adds hit points
 **************************************************************************/
ToughBird :: ToughBird()
{
    // set hit points
    setHits(3);
    
    // sets slower velocity
    velocity.setDx(random(2, 4));
    
    if (point.getY() >= 0)
        velocity.setDy(random(-3, 0));
    else
        velocity.setDy(random(0, 3));
}

/**************************************************************************
 * Hit function for tough bird. Overrides same function in bird class
 **************************************************************************/
int ToughBird :: hit()
{
    // decrease hit points
    hitPoints--;
    
    // if still has hit points then just add 1 to score
    if (hitPoints >= 1)
        return 1;
    // if no longer has hit points kill and add 3
    else if (hitPoints < 1)
        kill();
    return 3;
}

/**************************************************************************
 * Draw function for tough bird
 **************************************************************************/
void ToughBird :: draw() const
{
    drawToughBird(getPoint(), RADIUS, hitPoints);
}
