#include <iostream>
using namespace std;

class GFG
{
private:
    int private_var;

protected:
    int protected_var;

public:
    GFG()
    {
        private_var = 10;
        protected_var = 99;
    }
    friend class F;
};

class F
{
public:
    void display(GFG &t)
    {
        cout << "The value of private variable:" << t.private_var << endl;
        cout << "The value of protected variable:" << t.protected_var << endl;
    }
};

int main()
{
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}