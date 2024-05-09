#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getData(int a, float b);
    void putData()
    {
        cout << "Number:" << number << endl;
        cout << "Cost:" << cost << endl;
    }
};
void item::getData(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{
    item x, y;

    cout << "Object x:-" << endl;
    x.getData(100, 299.95);
    x.putData();

    cout << "Object y:-" << endl;
    y.getData(200, 599.98);
    y.putData();
    return 0;
}