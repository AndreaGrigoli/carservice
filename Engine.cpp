#include "Engine.h"

using namespace std;



   Engine::~Engine() {
        //cout << "Engine dtor" << '\n';
    }


string Engine::echoEngine( )
{
    ostringstream oss;
    oss << " echo from Engine....";
    return oss.str();
    //return " echo from Engine....";

}


Engine::Engine(EngineType type,string name ): BaseEngine(type , name)
{

    //_name = name;
}
