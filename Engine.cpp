#include "Engine.h"

using namespace std;

Engine::Engine()
{
    _name = "Default_Engine";
    _type = EngineType::DIESEL;
    _id = 0;
}


Engine::Engine(EngineType type,string name )
{
    _type = type;
    _name = name;
}

Engine::Engine( const Engine & engine )
{
    _name = engine._name;
    _type = engine._type;
}

EngineType Engine::getType()
{
    return _type;
}

void Engine::setId( int id)
{
    _id = id;
}

int Engine::getId()
{
    return _id;
}

string Engine::getName()
{
    return _name;
}



void Engine::print( ostream & output )
{
    output << "( name: " << _name;
    switch(_type){
    case EngineType::DIESEL : output << " type: DIESEL" << ")"; break;
    case EngineType::GAS : output << " type: GAS" << ")"; break;
    case EngineType::PETROL : output << " type: PETROL" << ")"; break;
    }

}

ostream & operator << ( ostream & output, Engine & engine )
{
    engine.print( output );
    return output;
}


bool operator== (const Engine &e1, const Engine &e2)
{
    return ((e1._type == e2._type) && (!e1._name.compare(e2._name)));
}

bool operator!= (const Engine &e1, const Engine &e2)
{
   return !(e1== e2);
}

