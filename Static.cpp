#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;              // Default value of count = 0.

public:
    void setData(void)
    {
        cout << "Enter the id:";
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of this employee is:" << id << " & this is employee number:" << count << endl;
    }

    static void getCount(void)      // Static function.
    {
        // (cout<<id;) throws an error as it is non-static.nee
        cout << "The value of count is:" << count << endl;
    }
};

int Employee::count;             // 'count' is Static data member of class Employee.

int main()
{
    Employee harry, rohan, ankit;

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    ankit.setData();
    ankit.getData();
    Employee::getCount();

    return 0;
}

// Static function is used to access the static variables only.