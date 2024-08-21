#include <iostream>
using namespace std;

class base;

class anotherClass
{
public:
    void memberFunction(base &obj);
};

class base
{
private:
    int private_var;

protected:
    int protected_var;

public:
    base()
    {
        private_var = 10;
        protected_var = 99;
    }
    friend void anotherClass ::memberFunction(base &obj);
};

void anotherClass ::memberFunction(base &obj)
{
    cout << "Private Variable:" << obj.private_var << endl;
    cout << "Protected Variable:" << obj.protected_var << endl;
}
int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);

    return 0;
}