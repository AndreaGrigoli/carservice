#include "car.h"


Car::Car()
{

//_engine = Engine();

}
/*
Car::Car(Engine engine,string name) : _licensePlate("XXXXXXX"), _name(name)
{
    _engine = Engine(engine);
    //_horsePower = HorsePower(horsePower);
}*/


Car::Car( const Car &car ):_name(car._name),_licensePlate(car._licensePlate),_engine(car._engine),_id(car._id),_color(car._color),_wheels(car._wheels),_interior(car._interior),_darkGlass(car._darkGlass),_airConditioning(car._airConditioning),_horsePower(car._horsePower)
{


}



/*
string Car::getHorsePower(){
    return _horsePower.getHorsePower();
}
*/
/*void Car::setLicensePlate(string licensePlate){
 _licensePlate = licensePlate;
}*/



Car::~Car()
{
    //dtor
}


void Car::print( ostream & output )
{
    output << "(Name: " << _name << endl;
    output << " LicensePlate: " << _licensePlate <<endl;
   // output << " Engine: " << _engine->echoEngine() <<endl;
    output << " Color: " << _color  <<endl;
    output << " Wheels: " << _wheels  <<endl;
    output << " Dark Glass: " << _darkGlass  <<endl;
    output << " Air Conditioning: " << _airConditioning  <<endl;
    output << " Interior: " << _interior  <<endl;
   output << " HorsePower: " << _horsePower  <<endl;
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
