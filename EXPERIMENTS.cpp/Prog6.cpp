// Program to check for Leap year.

#include <iostream>
using namespace std;

class Year
{

public:
    void chkYear(int y)
    {
        if ((y % 4) == 0 && (y != 100) || (y % 400) == 0)
        {
            cout << "It is a Leap year.";
        }
        else
        {
            cout << "It is not a Leap year.";
        }
    }
};
int main()
{
    int year;
    Year obj;

    cout << "Enter the year:";
    cin >> year;

    obj.chkYear(year);

    return 0;
}