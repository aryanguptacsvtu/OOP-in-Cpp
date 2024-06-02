#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;
    int getPVT()
    {
        return pvt;
    }
};

class PublicDerived : public Base
{
public:
    int getProt()
    {
        return prot;
    }
};

int main()
{
    PublicDerived obj1;
    cout << "Private:" << obj1.getPVT() << endl;
    cout << "Protected:" << obj1.getProt() << endl;
    cout << "Public:" << obj1.pub << endl;

    return 0;
}