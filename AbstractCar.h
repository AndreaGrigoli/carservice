#ifndef ABSTRACTCAR_H
#define ABSTRACTCAR_H
#include <iostream>
#include "Engine.h"

using namespace std;
class AbstractCar
{
    public:
        AbstractCar(){};

        virtual void setColor(string color)=0;
        virtual void setWheels(string wheels)=0;
        virtual void setInterior(string interior)=0;
        virtual void setAirConditioning(bool airConditioning)=0;
        virtual void setDarkGlass(bool darkGlass)=0;
        virtual void setName(string name)=0;
        virtual void setEngine(string engineName,EngineType type)=0;
        //virtual void setDarkGlass(bool darkGlass)=0;
       // virtual string getLicensePlate()=0;
       //virtual string getName()=0;


};

#endif // ABSTRACTCAR_H
