#ifndef ENGINE_H
#define ENGINE_H
#include "BaseEngine.h"
#include <sstream>
using namespace std;

class Engine : public BaseEngine
{


    public:
          void print( ostream & output = cout );
    ~Engine();
     string echoEngine();
    Engine( EngineType type,string name);
     void setId( int id );
        int getId();
        string getName();
        EngineType getType();

          Engine( const Engine & engine );
       // BaseEngine( EngineType type,string name);

        friend ostream & operator << ( ostream & output, Engine & engine );
        friend bool operator== (const Engine &e1, const Engine &e2);
        friend bool operator!= (const Engine &e1, const Engine &e2);


    private:
        int _id;
        EngineType _type;
        string _name;

};

#endif // ENGINE_H
