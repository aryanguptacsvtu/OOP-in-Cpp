#include <iostream>
using namespace std;

class CGS
{
    int mts, cms;

public:
    void showdata()
    {
        cout << "Meters and centimeters in CGS system:";
        cout << mts << "meters " << cms << "centimeters" << endl;
    }

    CGS(int x, int y)
    {
        mts = x;
        cms = y;
    }

    int getcms()
    {
        return cms;
    }

    int getmts()
    {
        return mts;
    }
};

class FPS
{
    int feet, inches;

public:
    FPS()
    {
        feet = 0;
        inches = 0;
    }

    FPS(CGS d2)
    {
        int x;
        x = d2.getcms() + d2.getmts() * 100;
        x = x / 2.5;
        feet = x / 12;
        inches = x % 12;
    }

    void showdata()
    {
        cout << "Feet and inches in FPS system:";
        cout << feet << "feet " << inches << "inches" << endl;
    }
};

int main()
{
    CGS d1(9, 10);
    FPS d2;
    d2 = d1;

    d1.showdata();
    d2.showdata();

    return 0;
}