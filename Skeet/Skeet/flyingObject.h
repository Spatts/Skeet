//
//  flyingObject.h
//  Skeet
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#ifndef flyingObject_h
#define flyingObject_h
#include "point.h"
#include "velocity.h"

class FlyingObject
{
private:
    bool alive;
    
protected:
    Point point;
    Velocity velocity;
    
public:
    // Constructor
    FlyingObject(int x, int y, int dX, int Dy);
    
    // Getter
    bool isAlive() const { return alive; }
    
    // Getters
    Point getPoint() const { return point; }
    Velocity getVelocity() const { return velocity; }
    
    // Setters
    void setAlive(bool alive);
    void kill();
    void setPoint(Point & point);
    void setVelocity(Velocity & velocity);
    
    // Methods
    virtual void draw() const = 0;
    void advance();
    
};



#endif /* flyingObject_h */
