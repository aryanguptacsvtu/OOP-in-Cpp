#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    Base obj1;
    Derived obj2;

    // cout<<obj2.a; [INVALID]

    return 0;
}

/*
    Members                     Public Derivation     Private Derivation     Protected Derivation

1. "Private" members            Not Inherited         Not Inherited          Not Inherited 
2. "Protected" members          Protected             Private                Protected 
3. "Public" members             Public                Private                Protected 

*/