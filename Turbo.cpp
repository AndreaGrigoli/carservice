#include "Turbo.h"
using namespace std;




Turbo::Turbo(BaseEngine *inner) {
        m_wrappee = inner;
    }

   Turbo::~Turbo() {
       // cout << "Turbo dtor" << "   ";
        delete m_wrappee;
    }

    string Turbo::echoEngine() {
    ostringstream oss;
    //oss << m_wrappee->echoEngine();
    oss << "ddd";
    return oss.str();
       //return  m_wrappee->echoEngine();
    }


