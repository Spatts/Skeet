//
//  SacredBird.cpp
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#include "sacredBird.h"
#include "point.h"
#include "velocity.h"
#include "flyingObject.h"
#include "bird.h"

#include <cassert>

#define RADIUS 14
#define XSTART -195

/**************************************************************************
 * Calls the bird constructor values.
 **************************************************************************/
SacredBird :: SacredBird()
{
   
}

/**************************************************************************
 * Hit function. Return -10 for score for this bird.
 **************************************************************************/
int SacredBird :: hit()
{
    kill();
    return -10;
}

/**************************************************************************
 * Draws the bird
 **************************************************************************/
void SacredBird :: draw() const
{
    drawSacredBird(getPoint(), RADIUS);
}
