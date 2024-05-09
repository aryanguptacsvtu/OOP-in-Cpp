#include <iostream>
using namespace std;
class Employee
{
public:
    int id;          // data member (also instance variable)
    string name;     // data member(instance variable)
    float salary;

    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main()
{
    Employee e1 = Employee(101, "Sonoo", 890000);
    Employee e2 = Employee(102, "Nakul", 59000);

    e1.display();
    e2.display();
    return 0;
}