#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter your age:";
    cin >> age;

    try
    {
        if (age >= 18)
        {
            cout << "You can vote!!" << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int age)
    {
        cout << "You cannot vote." << endl;
        cout << "Your age is:" << age;
    }

    return 0;
}