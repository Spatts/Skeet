//
//  bird.h
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#ifndef bird_h
#define bird_h

#include "point.h"
#include "flyingObject.h"
#include "velocity.h"
#include "uiDraw.h"

class Bird : public FlyingObject
{
public:
    // Constructor
    Bird();
    
    // When bird is hit
    virtual int hit();
    
    // Draws bird
    virtual void draw() const;
};

#endif
