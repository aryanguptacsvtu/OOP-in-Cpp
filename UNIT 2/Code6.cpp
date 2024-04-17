#include <iostream>
using namespace std;

class Circle
{
public:
    double radius;

    double area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    Circle obj;

    obj.radius = 5.5;

    cout << "Radius is:" << obj.radius << endl;
    cout << "Area is:" << obj.area() << endl;

    return 0;
}
