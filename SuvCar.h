#ifndef SUVCAR_H
#define SUVCAR_H
#include "CarBuilder.h"

class SuvCar : public CarBuilder
{

    private:
    Car *car;

    public:
        SuvCar(){
        car = new Car();
        }

        void buildName(string name){
        car->setName(name);
        }


        void buildColor(){
        car->setColor("Nero");
        }

        void buildAirConditioning(){
        car->setAirConditioning(true);
        }

        void buildDarkGlass(){
        car->setDarkGlass(true);
        }

        void buildEngine(BaseEngine  & anX){
        //car->setEngine("MotoreSuv",EngineType::DIESEL);
        }

        void buildHorsePower(){
        car->setHorsePower(200,2000);
        }

        void buildInterior(){
        car->setInterior("Pelle");
        }

        void buildWheels(){
        car->setWheels("Cerchi 19");
        }



        Car* getCar(){
            return this->car;
        }

};

#endif // SUVCAR_H
