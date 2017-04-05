#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <string>
#include "EngineType.h"
using namespace std;

class Engine
{
   private:
    int _id;
    EngineType _type;
    string _name;

    public:
    Engine();
    Engine( const Engine & engine );
    Engine( EngineType type,string name);

    void setId( int id );

    int getId();

    string getName();

    EngineType getType();

    void print( ostream & output = cout );

    friend ostream & operator << ( ostream & output, Engine & engine );

    friend bool operator== (const Engine &e1, const Engine &e2);

    friend bool operator!= (const Engine &e1, const Engine &e2);

};

#endif // ENGINE_H
