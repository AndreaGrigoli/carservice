#ifndef CARBUILDER_H
#define CARBUILDER_H
#include "car.h"

class CarBuilder
{
    public:
 /* Abstract functions to build parts */
 virtual void buildColor()=0;
 virtual void buildInterior()=0;
 virtual void buildWheels()=0;
 virtual void buildAirConditioning()=0;
 virtual void buildDarkGlass()=0;
 virtual void buildEngine()=0;
 virtual void buildHorsePower()=0;
 virtual void buildName(string name)=0;



 /* The car is returned by this function */
 virtual Car* getCar()=0;
};

#endif // CARBUILDER_H
