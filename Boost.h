#ifndef BOOST_H
#define BOOST_H
#include <iostream>
#include "Turbo.h"
using namespace std;

class Boost : public Turbo
{
    public:
        Boost(BaseEngine *core): Turbo(core){}
      ~Boost();
      string echoEngine();


};

#endif // BOOST_H
