#include "BaseEngine.h"

using namespace std;

BaseEngine::BaseEngine()
{
    _name = "Default_Engine";
    _type = EngineType::DIESEL;
    _id = 0;
}

void BaseEngine::print( ostream & output )
{
    output << "( name: " << _name;
    switch(_type){
    case EngineType::DIESEL : output << " type: DIESEL" << ")"; break;
    case EngineType::GAS : output << " type: GAS" << ")"; break;
    case EngineType::PETROL : output << " type: PETROL" << ")"; break;
    }

}

BaseEngine::BaseEngine(EngineType type,string name )
{
    _type = type;
    _name = name;
}

BaseEngine::BaseEngine( const BaseEngine & engine )
{
    _name = engine._name;
    _type = engine._type;
}

EngineType BaseEngine::getType()
{
    return _type;
}

void BaseEngine::setId( int id)
{
    _id = id;
}

int BaseEngine::getId()
{
    return _id;
}

string BaseEngine::getName()
{
    return _name;
}





ostream & operator << ( ostream & output, BaseEngine & engine )
{
    engine.print( output );
    return output;
}


bool operator== (const BaseEngine &e1, const BaseEngine &e2)
{
    return ((e1._type == e2._type) && (!e1._name.compare(e2._name)));
}

bool operator!= (const BaseEngine &e1, const BaseEngine &e2)
{
   return !(e1== e2);
}


