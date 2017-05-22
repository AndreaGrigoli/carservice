#include "Engine.h"

using namespace std;



   Engine::~Engine() {
        //cout << "Engine dtor" << '\n';
    }


string Engine::echoEngine( )
{
    ostringstream oss;
    oss << " Motore NAME: "<< _name << endl;
    switch(_type){
    case EngineType::DIESEL : oss << " type: DIESEL"; break;
    case EngineType::GAS : oss << " type: GAS"; break;
    case EngineType::PETROL : oss << " type: PETROL"; break;
    }
    return oss.str();
    //return " echo from Engine....";

}


Engine::Engine(EngineType type,string name )
{
    _name = name;
    _type = type;
    //_name = name;
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
