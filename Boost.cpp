#include "Boost.h"


Boost::~Boost()
{
    //dtor
     cout << "Boost dtor" << "   ";
}


 string Boost::echoEngine() {
      ostringstream oss;
      oss << Turbo::echoEngine();
      oss << "Turbo BOOST WROOOM!!!";
      return oss.str();

    }
