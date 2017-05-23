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

        void buildName(){
        car->setName("SUV");
        }

        void buildGPS(){
        car->setGPS(true);
        }

        void buildBluetooth(){
        car->setBluetooth(true);
        }

        void buildAutomaticGearBoxes(){
        car->setAutomaticGearBoxes(true);
        }

        void buildBrand(){
        car->setBrand("Renault");
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

        void buildEngine(){
        //void buildEngine(BaseEngine  & anX){
        BaseEngine *turboBoostEngine = new Boost(new Turbo(new Engine(EngineType::DIESEL,"MotoreSuv")));
        //car->setEngine("MotoreSuv",EngineType::DIESEL);
        car->setEngine(turboBoostEngine);
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
