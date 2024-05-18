#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {

        cout << "Constructor executed." << endl;
        cout << "The value of a is:" << a << endl;
        cout << "The value of b is:" << b << endl;
    }
};

int main()
{
    Test obj(5, 6);

    return 0;
}


/*
    'VALID':-
    Test(int i, int j) : a(i), b(i+j) --> a=5 , b=11
    Test(int i, int j) : a(i), b(2*j) --> a=5 , b=12
    Test(int i, int j) : a(i), b(a+j) --> a=5 , b=11

    Test(int i, int j) : b(j) ,a(b+j) --> 'INVALID', since 'a' will be initialised first.


    "Syntax" for Initialization List in Constructor:-
    constructor(argument-list) : Initialization section
    {
        ---CODE---
    }
*/