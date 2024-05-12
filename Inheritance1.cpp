#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 35.5;
    }
    Employee() {} // Default Constructor
};

class Programmer : Employee // Derived Class(Programmer)
{
public:
    int languageCode = 5;

    Programmer(int inpId)
    {
        id = inpId;
    }
    void getData()
    {
        cout << "The id:" << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.id << endl;
    cout << harry.salary << endl;
    cout << rohan.id << endl;
    cout << rohan.salary << endl << endl;


    Programmer skillF(10);
    cout << "Language code:" << skillF.languageCode << endl;
    // cout<<skillF.id<<endl; [INVALID]
    skillF.getData();

    return 0;
}

/* "Syntax for Derived Class":-
class {{Derived Class Name}} : {{visibilty mode}} {{Base Class}}

--> Default visibility mode is 'private'.
--> Private members of Base class are never inherited.

--> Public Visibility Mode :- Public memebers of the Base class becomes public members of the Derived class.
--> Private Visibility Mode :- Public memebers of the Base class becomes private members of the Derived class.
*/
