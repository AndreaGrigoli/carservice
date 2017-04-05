#include "car.h"


Car::Car():_licensePlate("XXXXXXX"), _name("Default_Car")
{

_engine = Engine();
}

Car::Car(Engine engine,string name) : _licensePlate("XXXXXXX"), _name(name)
{
    _engine = Engine(engine);
}


Car::Car( const Car &car ):_name(car._name),_licensePlate(car._licensePlate),_engine(car._engine),_id(car._id)
{


}

string Car::getLicensePlate(){
    return _licensePlate;
}

string Car::getName(){
    return _name;
}


void Car::setLicensePlate(string licensePlate){
 _licensePlate = licensePlate;
}



Car::~Car()
{
    //dtor
}


void Car::print( ostream & output )
{
    output << "(Name: " << _name << endl;
    output << " LicensePlate: " << _licensePlate <<endl;
    output << " Engine: " << _engine  <<endl;
    output << ")";
}

ostream & operator << ( ostream & output, Car & car )
{
    car.print( output );
    return output;
}


bool operator== (const Car &c1, const Car &c2)
{
    return (!c1._name.compare(c2._name));
}

bool operator!= (const Car &c1, const Car &c2)
{
   return !(c1== c2);
}
