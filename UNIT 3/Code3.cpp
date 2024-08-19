#include <iostream>
using namespace std;

class Time
{
    int hour, mins;

public:
    Time()
    {
        hour = 0;
        mins = 0;
    }
    Time(int t)
    {
        hour = t / 60;
        mins = t % 60;
    }
    void Display()
    {
        cout << "Time:" << hour << "hrs and " << mins << "mins" << endl;
    }
};

int main()
{
    Time T1;
    int dur = 95;

    T1 = dur;
    T1.Display();
    return 0;
}