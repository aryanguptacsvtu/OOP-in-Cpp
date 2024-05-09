// ARRAY  OF  OBJECTS 

#include <iostream>
using namespace std;
class Employee
{
    int id;
    char name[30];

public:
    void getdata();
    void putdata();
};

void Employee::getdata()
{
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
}
void Employee::putdata()
{
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}

int main()
{
    Employee emp[30];
    int n, i;
    cout << "Enter Number of Employees - ";
    cin >> n;
    
    for (i = 0; i < n; i++)        // Accessing the function     
    { 
        emp[i].getdata();
    }
    cout << "Employee Data - " << endl;

    for (i = 0; i < n; i++)
    {
        emp[i].putdata();
    }

    return 0;
}
