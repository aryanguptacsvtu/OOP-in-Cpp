#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    void Area(double r)
    {
        radius = r;
        double area = 3.14 * radius * radius;

        cout << "Radius is:" << radius << endl;
        cout << "Area is:" << area << endl;
    }
};

int main()
{
    Circle obj;

    obj.Area(1.5);
    
    return 0;
}