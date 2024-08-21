#include <iostream>
using namespace std;
int main()
{
    char name[20];

    cout << "Enter name:";

    cin.getline(name, 20);
    cout << "The name is:" << name;
    return 0;
}