#ifndef ENGINE_H
#define ENGINE_H
#include "BaseEngine.h"
#include <sstream>
using namespace std;

class Engine : public BaseEngine
{


    public:
    ~Engine();
     string echoEngine();
    Engine( EngineType type,string name);

};

#endif // ENGINE_H
