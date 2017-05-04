#include "carrepository.h"


//Ho salvato gli oggetti in un vettore per poter fare i test.
// Chi sviluppa la parte del DATABASE, dovrà implementare i metodi di questa classe, (rispettando i parametri)
// per salvare / recuperare effettivamente i dati sul database.

CarRepository::CarRepository()
{
//initGarage();

}

CarRepository::~CarRepository()
{
    //dtor
    _array.clear();
}


void CarRepository::saveCar(Car car)
{
    _array.push_back(car);
    cout << "Car : " << car << " saved" << endl;
}


void CarRepository::deleteCar(Car car)
{
/*
    for (vector<Car>::iterator it=_array.begin();it!=_array.end();)
    {
        if(it->getName().compare(car.getName()) ==0)
            it = _array.erase(it);
        else
        ++it;
    }
*/
     cout << "Car : " << car << " deleted" << endl;
}

void CarRepository::updateCar(Car car)
{
    cout << "Car : " << car << " updated" << endl;
}



vector<Car> CarRepository::getAllCars(){


return _array;

}

Car CarRepository::getCar(string name){
for(int i = 0; i< _array.size();i++){
    Car tempCar = _array[i];
    if(tempCar.getName().compare(name) == 0){
        return tempCar;
    }
}
}

/*
void CarRepository::initGarage()
{
    //cout << "Initialize Garage.. : "<< endl;


Engine engine;
HorsePower horsePower;
Car c1(engine,"c1");
//c1->horsePower = horsePower;
Car c2(engine,"c2");
//c2.horsePower = horsePower;
Car c3(engine,"c3");
//c3.horsePower = horsePower;
Car c4(engine,"c4");
//c4.horsePower = horsePower;
Car c5(engine,"c5");
//c5.horsePower = horsePower;
//_array.resize(10);
_array.push_back(c1);
_array.push_back(c2);
_array.push_back(c3);
_array.push_back(c4);
_array.push_back(c5);

}*/
