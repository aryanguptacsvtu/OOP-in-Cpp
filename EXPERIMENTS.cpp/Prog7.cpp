#include <iostream>
using namespace std;

class Area
{
    int length, breadth;
    int base, height;
    int radius;

public:                            // Function Overloading
    double area(float l, float b1)
    {
        length = l;
        breadth = b1;
        return (l * b1);
    }
    int area(int b2, int h)
    {
        base = b2;
        height = h;
        return 0.5 * (b2 * h);
    }
    int area(int r)
    {
        radius = r;
        return 3.14 * (r * r);
    }
};

int main()
{
    float l, b1, x;
    int b2, h, r;
    int y, z;
    Area obj;

    cout << "Area of Rectangle:"<<endl;
    cout << "Enter the length:";
    cin >> l;
    cout << "Enter the breadth:";
    cin >> b1;
    x = obj.area(l, b1);
    cout << "Area:" << x;
    cout << endl<< endl;


    cout << "Area of Triangle:"<<endl;
    cout << "Enter the base:";
    cin >> b2;
    cout << "Enter the height:";
    cin >> h;
    y = obj.area(b2, h);
    cout << "Area:" << y;
    cout << endl<< endl;


    cout << "Area of Circle:"<<endl;
    cout << "Enter the radius:";
    cin >> r;
    z = obj.area(r);
    cout << "Area:" << z;

    return 0;
}