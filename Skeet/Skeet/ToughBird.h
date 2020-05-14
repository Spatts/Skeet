//
//  ToughBird.h
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#ifndef ToughBird_h
#define ToughBird_h

#include "point.h"
#include "velocity.h"
#include "bird.h"
#include "uiDraw.h"

class ToughBird : public Bird
{
private:
    int hitPoints;
    
public:
    // Constructor
    ToughBird();
    
    // Getters and setters for hit
    void setHits(int hits) { this->hitPoints = hits; }
    int getHits() const { return hitPoints; }
    
    // Hit Method
    virtual int hit();
    
    // Draws bird
    virtual void draw() const;
};

#endif /* ToughBird_h */
