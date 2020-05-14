//
//  bullet.h
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#ifndef bullet_h
#define bullet_h
#include "point.h"
#include "flyingObject.h"
#include "velocity.h"

class Bullet : public FlyingObject
{
public:
    // Constructor
    Bullet();
    
    // Draws bullet
    virtual void draw() const;
    
    // Fires rifle
    void fire(const Point & p, float angle);
};

#endif /* bullet_h */
