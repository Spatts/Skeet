//
//  SacredBird.h
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#ifndef SacredBird_h
#define SacredBird_h

#include "point.h"
#include "velocity.h"
#include "bird.h"
#include "uiDraw.h"

class SacredBird : public Bird
{
    
public:
    // Constructor
    SacredBird();
    
    // hit method
    virtual int hit();
    
    // Draws bird
    virtual void draw() const;
};

#endif /* SacredBird_h */
