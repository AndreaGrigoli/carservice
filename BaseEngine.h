#ifndef BASEENGINE_H
#define BASEENGINE_H
#include <iostream>
#include <string>
#include "EngineType.h"
#include "BaseEngine.h"
using namespace std;
class BaseEngine
{


    public:
        virtual ~BaseEngine(){};
        virtual string echoEngine() = 0;
        void print( ostream & output = cout );
        BaseEngine();
        BaseEngine( const BaseEngine & engine );
        BaseEngine( EngineType type,string name);
        void setId( int id );
        int getId();
        string getName();
        EngineType getType();
        friend ostream & operator << ( ostream & output, BaseEngine & engine );
        friend bool operator== (const BaseEngine &e1, const BaseEngine &e2);
        friend bool operator!= (const BaseEngine &e1, const BaseEngine &e2);

    private:
        int _id;
        EngineType _type;
        string _name;

};
#endif // BASEENGINE_H
