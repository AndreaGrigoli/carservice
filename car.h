#ifndef CAR_H
#define CAR_H
#include "Engine.h"



class Car
{
    public:
        Car();
        Car(Engine engine,string name);
        Car( const Car &car );


        string getLicensePlate();
        string getName();

        void setLicensePlate(string licensePlate);

        virtual ~Car();
        void print( ostream & output = cout );
        friend ostream & operator << ( ostream & output, Car & car );

        friend bool operator== (const Car &c1, const Car &c2);
        friend bool operator!= (const Car &c1, const Car &c2);

    protected:

    private:
        int _id;
        string _licensePlate;
        string _name;
        Engine _engine;

};

#endif // CAR_H
