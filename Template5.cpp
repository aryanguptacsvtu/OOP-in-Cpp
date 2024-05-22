#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T> ::display()      // Outside Class Definition
{
    cout << "Output: " << data << endl;
}


template <class T>
void func(T x)
{
    cout << "I am templatised function. x =" << x << endl;
}

void func(int x)
{
    cout << "I am normal function. x =" << x << endl;
}

int main()
{
    Harry<int> obj(10);
    obj.display();

    func(1000);   // Exact match takes the highest priority.
    func(12.34);
    func('y');
    
    return 0;
}