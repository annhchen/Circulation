/////////////////////////////////////////
//
// pocode : Particles
//
/////////////////////////////////////////

#ifndef Particle_h
#define Particle_h

#include "poObject.h"
#include "poShapeBasics2D.h"
#include "poTextBox.h"

class Particle : public poObject {
public:
	Particle();
	
    virtual void draw();
	virtual void update();
	virtual void eventHandler(poEvent* event);
	
	poShape2D* shape;
	poPoint	velocity;
	float	rotationSpeed;
    
    poTextBox* A;
    
    char    letter[8];
    
};


#endif
