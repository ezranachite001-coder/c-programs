#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
    string Brand;
    int YearOfMaufacture;

    Vehicle(string brand,int year)
    {
        Brand = brand;
        YearOfMaufacture = year;

    }

    void displayVehicle()
    {
        cout <<"======VEHICLE DETAILS====="<<endl;
        cout <<"Brand: "<<Brand<<endl;
        cout <<"Year of Manufacture: "<<YearOfMaufacture<<endl;
        cout <<"========================="<<endl;

    }

};
class Car:public Vehicle
{
    private:
    int NumberOfDoors;
    int EngineCapacity;

    public:
    Car(string brand,int year,int n_doors,int e_capacity):Vehicle(brand,year)
    {
        NumberOfDoors = n_doors;
        EngineCapacity = e_capacity;

    }
    
    void displayCar()
    {
        cout <<"======VEHICLE DETAILS====="<<endl;
        cout <<"Brand: "<<Brand<<endl;
        cout <<"Year of Manufacture: "<<YearOfMaufacture<<endl;
        cout <<"Number of doors: "<<NumberOfDoors<<endl;
        cout <<"Engine Capacity: "<< EngineCapacity<<endl;
        cout <<"========================="<<endl;


    }

};
int main()
{
    Car car1("Toyota",2020,4,1600);
    car1.displayCar();
    return 0;
}