#ifndef ECONOMYCAR_H
#define ECONOMYCAR_H
#include "car.h"
#include "CarBuilder.h"


class EconomyCar:public CarBuilder{

    private:
    Car *car;

    public:
        EconomyCar(){
        car = new Car();
        }

        void buildName(string name){
         car->setName(name);
        }

        void buildColor(){
        car->setColor("Bianca");
        }

        void buildAirConditioning(){
        car->setAirConditioning(false);
        }

        void buildDarkGlass(){
        car->setDarkGlass(false);
        }

        void buildInterior(){
        car->setInterior("Tessuto");
        }

        void buildWheels(){
        car->setWheels("Cerchi Alluminio");
        }

        void buildEngine(){
        car->setEngine("Motore500",EngineType::PETROL);
        }

        void buildHorsePower(){
        car->setHorsePower(100,1200);
        }

        Car* getCar(){
            return this->car;
        }

};

#endif // SUVCAR_H
