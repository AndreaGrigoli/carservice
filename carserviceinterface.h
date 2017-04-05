#ifndef CARSERVICEINTERFACE_H
#define CARSERVICEINTERFACE_H
#include "carrepository.h"



class CarServiceInterface
{
     private:
        CarRepository carRepository;


    public:
        CarServiceInterface();
        virtual ~CarServiceInterface();


        vector<Car> getAllCars();

        Car getCar(string name);

        void saveCar(const Car car);

        void deleteCar(const Car car);


    protected:


};

#endif // CARSERVICEINTERFACE_H
