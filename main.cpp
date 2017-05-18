
#include <iostream>
#include "carserviceinterface.h"
#include "SuvCar.h"
#include "Factory.h"
#include "EconomyCar.h"
#include "Boost.h"
#include "Engine.h"

using namespace std;

void func(const std::vector<Car>& vec);

int main()
{
    //Builder design pattern


    //Una classe per ciascuna classe di macchine da creare
    CarBuilder *carSuvBuilder = new SuvCar();
    CarBuilder *carEconomyBuilder = new EconomyCar();

    //La classe Factory attraverso il metodo buildCar costruisce la macchina utilizando il CarBuilder passato al costruttore
    //Vengono cosi  nascosti all'utilizzatore i dettagli implementativi per la creazione dell'oggetto car
    Factory *fSuv = new Factory(carSuvBuilder);
    Factory *feconomy = new Factory(carEconomyBuilder);
    //string dd = "ddd";
    BaseEngine *anX = new Boost(new Engine(EngineType::PETROL,"ssss"));

    anX->echoEngine();
/*
   // fSuv->buildCar("Suv",*anX);
   // Car *carSuv = fSuv->getCar();

    //FINE Builder design pattern


    cout << endl;
    cout << "------------- Creato SUV: -------------" << endl;
    cout << endl;
    cout << *carSuv << endl;

    cout << endl;
    cout << "------------- Echo del motore: -------------" << endl;
    cout << endl;
    cout << carSuv->echoEngine() << endl;

    BaseEngine *eco = new Boost(new Engine(EngineType::PETROL,"ssss"));

    feconomy->buildCar("500",*eco);
    Car *carEconomy = feconomy->getCar();
   // cout << *carSuv << endl;

    //cout << carEconomy->echoEngine() << endl;

   cout << endl;
    cout << "------------- Creata 500: -------------" << endl;
    cout << endl;
    cout << *carEconomy << endl;


     cout << endl;
    cout << "------------- Modifico 500: -------------" << endl;
    cout << endl;
    carEconomy->setColor("Red");
    carEconomy->setAirConditioning(true);
    cout << *carEconomy << endl;





    CarServiceInterface carServiceInterface;



    //il metodo saveCar permette di aggiungere una nuova macchina sul db

    carServiceInterface.saveCar(*carSuv);
    //cout << *carSuv << endl;
    carServiceInterface.saveCar(*carEconomy);

     cout << endl;
    cout << "------------- salvate 2 macchine nel garage: -------------" << endl;
    cout << endl;
    //vector<Car> garage = carServiceInterface.getAllCars();
    //cout << "Garage contains  : " << garage.size() << " cars" << endl;

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
    Car car = carServiceInterface.getCar("Suv");
    cout << car << endl;
    //cout << car.getHorsePower();


    cout << endl;

    cout << endl;
    cout << "------------- TEST deleteCar method: -------------" << endl;
    cout << endl;

    //Il metodo deleteCar cancella dal DB la macchina
    carServiceInterface.deleteCar(car);
    garage = carServiceInterface.getAllCars();
    cout << "Garage contains  : " << garage.size() << " cars" << endl;

    //
    */

    return 0;
}


