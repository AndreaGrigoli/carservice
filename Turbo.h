#ifndef TURBO_H
#define TURBO_H
#include <iostream>
#include "BaseEngine.h"
#include <sstream>
using namespace std;

class Turbo : public BaseEngine
{
    public:

        ~Turbo();
        string echoEngine();

         Turbo(BaseEngine *inner);


    private:
         BaseEngine *m_wrappee;
};

#endif // TURBO_H
