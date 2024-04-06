#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 12000;
        cout << "Enter the Id of Employee:";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is:" << id << endl<<endl;
    }
};

int main()
{
    int n;
    Employee Google[100];     // Array of Objects

    cout << "Enter the value of n:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Google[i].setId();
        Google[i].getId();
    }

    return 0;
}
