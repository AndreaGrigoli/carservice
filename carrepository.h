#ifndef CARREPOSITORY_H
#define CARREPOSITORY_H
#include "car.h"
#include <vector>

using namespace std;

class CarRepository
{
    public:
        CarRepository();
        virtual ~CarRepository();

        void saveCar(Car car);

        void deleteCar(Car car);

        void updateCar(Car car);

        vector<Car> getAllCars();

        Car getCar(string name);


    protected:

    private:

        vector<Car> _array;
        void initGarage();
};

#endif // CARREPOSITORY_H
