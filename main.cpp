
#include <iostream>
#include "carserviceinterface.h"

using namespace std;

void func(const std::vector<Car>& vec);

int main()
{
    cout << "------------- Car Service test -------------" << endl;
    cout << endl;
    // CarServiceInterface è la classe che deve utilizzare chi sviluppa la GUI
    // per interagire con il nostro sistema

    CarServiceInterface carServiceInterface;
    cout << endl;
    cout << "------------- TEST getAllCars method: -------------" << endl;
    cout << endl;

    //il metodo getAllCars ritorna un vettore di istanze di tipo Car
    vector<Car> garage = carServiceInterface.getAllCars();
    cout << "Garage contains  : " << garage.size() << " cars" << endl;

    for(vector<Car>::iterator car = garage.begin(); car != garage.end(); ++car) {
        cout << *car << endl;
    }

    cout << endl;
    cout << "------------- TEST getCar method: -------------" << endl;
    cout << endl;

    //Il metodo getCar aspetta come parametro il nome della macchina
    Car car = carServiceInterface.getCar("c2");
    cout << car << endl;

    cout << endl;
    cout << "------------- TEST saveCar method: -------------" << endl;
    cout << endl;

    //il metodo saveCar permette di aggiungere una nuova macchina sul db
    Car cn;
    carServiceInterface.saveCar(cn);
    garage = carServiceInterface.getAllCars();
    cout << "Garage contains  : " << garage.size() << " cars" << endl;

    cout << endl;

    cout << endl;
    cout << "------------- TEST deleteCar method: -------------" << endl;
    cout << endl;

    //Il metodo deleteCar cancella dal DB la macchina
    carServiceInterface.deleteCar(cn);
    garage = carServiceInterface.getAllCars();
    cout << "Garage contains  : " << garage.size() << " cars" << endl;
    return 0;
}


