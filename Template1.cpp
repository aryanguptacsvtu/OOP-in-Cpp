#include <iostream>
using namespace std;

template <class T>     // Creating Template

class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3);
    v2.arr[0] = 2.2;
    v2.arr[1] = 1.3;
    v2.arr[2] = 5.3;

    float a = v1.dotProduct(v2);
    cout << "Dot product:" << a << endl;

    return 0;
}