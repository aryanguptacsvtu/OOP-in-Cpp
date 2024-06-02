#include <iostream>
using namespace std;

class Animal     // Base class
{
public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }
};

class Mammal : virtual public Animal
{
public:
    void walk()
    {
        cout << "I can walk!" << endl;
    }
};

class Pet : virtual public Animal
{
public:
    void cuddle()
    {
        cout << "I love to cuddle!" << endl;
    }
};

// Derived class
class Dog : public Mammal, public Pet
{
public:
    void bark()
    {
        cout << "I can bark!" << endl;
    }
};

int main()
{
    Dog dog;
    dog.eat();
    dog.walk();
    dog.cuddle();
    dog.bark();
    
    return 0;
}
