#include "HorsePower.h"

using namespace std;

HorsePower::HorsePower()
{
    _cc = 1200;
    _horsePower = 100;
}


HorsePower::HorsePower(int cc,int horsePower )
{
    _cc = cc;
    _horsePower = horsePower;
}


HorsePower::HorsePower( const HorsePower & horsePower )
{
    _cc = horsePower._cc;
    _horsePower = horsePower._horsePower;
}

string HorsePower::getHorsePower()
{
    ostringstream oss;
    oss << "Motore da " << _horsePower << " Cavalli e " << _cc << " CC";
    return oss.str();

}



void HorsePower::print( ostream & output )
{
    output << "( Cavalli: " << _horsePower << " CC: " << _cc << ")";


}

ostream & operator << ( ostream & output, HorsePower & horsepower )
{
    horsepower.print( output );
    return output;
}


bool operator== (const HorsePower &e1, const HorsePower &e2)
{
    return ((e1._cc == e2._cc) && (e1._horsePower == e2._horsePower));
}

bool operator!= (const HorsePower &e1, const HorsePower &e2)
{
   return !(e1== e2);
}
