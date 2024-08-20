#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle." << endl;
    }
};

class FourWheeler : public Vehicle
{
public:
    FourWheeler()
    {
        cout << "This is a 4-wheeler vehicle." << endl;
    }
};

class Car : public FourWheeler
{
public:
    Car()
    {
        cout << "Car has 4 wheels.";
    }
};

int main()
{
    Car obj;
    return 0;
}