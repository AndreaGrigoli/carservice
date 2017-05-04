#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "Builder.h"
#include "car.h"

class Director
{
    Builder* builder;
    public:
         void setBuilder(Builder* newBuilder)
        {
            builder = newBuilder;
        }

    Car* getCar()
        {
            Car* car = new Car();

            /*car->body = builder->getBody();

            car->engine = builder->getEngine();

            car->wheels[0] = builder->getWheel();
            car->wheels[1] = builder->getWheel();
            car->wheels[2] = builder->getWheel();
            car->wheels[3] = builder->getWheel();
*/
            return car;
        }
};

#endif // DIRECTOR_H
