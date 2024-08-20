#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 5
int main()
{
    char *names[SIZE] = {"Rahul", "Aman", "Abdul", "Ram", "Pradeep"};

    cout<<"Last Characters:";
    for (int i = 0; i < SIZE; i++)
    {
        int currentStrLen = strlen(names[i]);
        char lastChar = names[i][currentStrLen - 1];
        cout << lastChar << " ";
    }
    cout << endl;

    cout << "Names:";
    for (int i = 0; i < SIZE; i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    names[2] = "Fashil";

    cout << "Names:";
    for (int i = 0; i < SIZE; i++)
    {
        cout << names[i] << " ";
    }

    return 0;
}