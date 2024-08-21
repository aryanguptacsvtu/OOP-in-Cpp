#include <iostream>
using namespace std;

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
    friend void friendFunction(base &obj);
};

void friendFunction(base &obj)
{
    cout << "Private Variable:" << obj.private_var << endl;
    cout << "Protected Variable:" << obj.protected_var << endl;
}

int main()
{
    base obj1;
    friendFunction(obj1);

    return 0;
}