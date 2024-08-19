#include <iostream>
using namespace std;

class Box
{
    double length, breadth, height;

public:
    double getVolume(void)
    {
        return length * breadth * height;
    }
    void setLength(double len)
    {
        length = len;
    }
    void setBreadth(double bre)
    {
        breadth = bre;
    }
    void setHeight(double hei)
    {
        height = hei;
    }

    Box operator+(const Box &b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;

    double volume = 0.0;

    Box1.setLength(1.0);
    Box1.setBreadth(2.0);
    Box1.setHeight(5.0);

    Box2.setLength(3.0);
    Box2.setBreadth(4.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    cout << "Volume of Box1:" << volume << endl;
    volume = Box2.getVolume();
    cout << "Volume of Box2:" << volume << endl;

    Box3 = Box1 + Box2;
    volume = Box3.getVolume();
    cout << "Volume of Box3:" << volume << endl;
    return 0;
}