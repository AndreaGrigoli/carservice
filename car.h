#ifndef CAR_H
#define CAR_H
#include "AbstractCar.h"
#include "Engine.h"
#include "HorsePower.h"
#include "Boost.h"
#include <sstream>



class Car:public AbstractCar
{
    public:
        Car();
       // Car(Engine engine,string name);
        Car( const Car &car );




        //string getHorsePower();

       // void setLicensePlate(string licensePlate);

         void setColor(string color)
        {
            this->_color = color;
        }



        void setWheels(string wheels)
        {
            this->_wheels = wheels;
        }

        void setInterior(string interior)
        {
            this->_interior = interior;
        }

        void setAirConditioning(bool airConditioning)
        {
            this->_airConditioning = airConditioning;
        }

         void setDarkGlass(bool darkGlass)
        {
            this->_darkGlass = darkGlass;
        }

          string getName()
        {
            return this->_name;
        }

         void setName(string name)
        {
            this->_name = name;
        }

         string echoEngine()
        {
            //cout << "s------------------------"<< endl;
             ostringstream oss;
             oss << this->_engine->echoEngine();
             //oss << "ddddd" ;
            return oss.str();
        }

        void setEngine(BaseEngine  & anX)
        //void setEngine(string engineName,EngineType type)
        {
            //BaseEngine *anX = new Boost(new Engine(type,engineName));
           // Engine engine(type,engineName);
           // this->_engine = engine;
           //anX->echoEngine();
           //cout << anX->getName();
           //anX->echoEngine();
            this->_engine = &anX;
            //this->_engine->echoEngine();
        }

         void setHorsePower(int cc,int horsePowerP)
        {
            HorsePower horsePower(cc,horsePowerP);
            this->_horsePower = horsePower;
        }




        virtual ~Car();
        void print( ostream & output = cout );
        friend ostream & operator << ( ostream & output, Car & car );

        friend bool operator== (const Car &c1, const Car &c2);
        friend bool operator!= (const Car &c1, const Car &c2);

    protected:

    private:
        int _id;
        BaseEngine *_engine;
        HorsePower _horsePower;
        string _color, _wheels, _interior,_licensePlate,_name;
        bool _airConditioning, _darkGlass;


};

#endif // CAR_H
