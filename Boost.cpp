#include "Boost.h"


Boost::~Boost()
{
    //dtor
     cout << "Boost dtor" << "   ";
}


 string Boost::echoEngine() {
        string echo = Turbo::echoEngine();
        cout << " !!!!TurboBoost!!!!!";
    }
