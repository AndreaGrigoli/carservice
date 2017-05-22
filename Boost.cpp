#include "Boost.h"


Boost::~Boost()
{
    //dtor
    // cout << "Boost dtor" << "   ";
}


 string Boost::echoEngine() {
      ostringstream oss;
      oss << Turbo::echoEngine()<< endl;
      oss << " BOOST";
      return oss.str();

    }
