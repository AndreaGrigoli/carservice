#include "Turbo.h"
using namespace std;




Turbo::Turbo(BaseEngine *inner) {
   // m_wrappee->BaseEngine(inner->getType(),inner->getName());
        m_wrappee = inner;
        //m_wrappee(inner->getType(),inner->getName());
    }

   Turbo::~Turbo() {
       // cout << "Turbo dtor" << "   ";
        delete m_wrappee;
    }

    string Turbo::echoEngine() {
    ostringstream oss;
    //oss << m_wrappee->echoEngine();
    oss << "Turbo WROOOM!!!";
    return oss.str();
       //return  m_wrappee->echoEngine();
    }


