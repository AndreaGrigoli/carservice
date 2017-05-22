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

       // BaseEngine();



};
#endif // BASEENGINE_H
