//
//  velocity.h
//  MoonLander
//
//  Created by Steven Patterson.
//  Copyright © 2018 Steven Patterson. All rights reserved.
//

#ifndef velocity_h
#define velocity_h

// Velocity class
class Velocity
{
    // Private variables are just coordinates
private:
    float Dx;
    float Dy;
    
public:
    // Default and non-Default constructor
    Velocity();
    Velocity(float x, float y);
    
    // Getters
    float getDx() const { return Dx; }
    float getDy() const { return Dy; }
    
    // Setters
    void setDx(float x);
    void setDy(float y);
    
};

#endif /* velocity_h */
