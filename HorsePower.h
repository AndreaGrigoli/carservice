#ifndef HORSEPOWER_H_INCLUDED
#define HORSEPOWER_H_INCLUDED
#include <iostream>
#include <sstream>

using namespace std;


class HorsePower
{
   private:
    int _cc;
    int _horsePower;

    public:
    HorsePower();
    HorsePower( const HorsePower & horsePower );
    HorsePower( int cc,int horsePower);

    string  getHorsePower();

    void print( ostream & output = cout );

    friend ostream & operator << ( ostream & output, HorsePower &horsePower );

    friend bool operator== (const HorsePower &e1, const HorsePower &e2);

    friend bool operator!= (const HorsePower &e1, const HorsePower &e2);

};

#endif // HORSEPOWER_H_INCLUDED
