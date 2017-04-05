#include "carserviceinterface.h"

CarServiceInterface::CarServiceInterface()
{
    //ctor
}

CarServiceInterface::~CarServiceInterface()
{
    //dtor
}


vector<Car> CarServiceInterface::getAllCars()
{
   return carRepository.getAllCars();
}

Car CarServiceInterface::getCar(string name){
    return carRepository.getCar(name);
}

void CarServiceInterface::saveCar(const Car car){
    carRepository.saveCar(car);
}

void CarServiceInterface::deleteCar(const Car car){
    carRepository.deleteCar(car);
}
