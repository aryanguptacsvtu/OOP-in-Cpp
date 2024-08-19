#include <iostream>
using namespace std;

// Class template
template <typename T>
class Pair
{
private:
    T first, second;

public:
    Pair(T a, T b) : first(a), second(b) {}

    T getFirst() 
    {
        return first;
    }

    T getSecond() 
    {
        return second;
    }

    void setFirst(T a)
    {
        first = a;
    }

    void setSecond(T b)
    {
        second = b;
    }
};

int main()
{
    // Using class template with different data types
    Pair<int> intPair(1, 2);
    cout << "Int Pair: (" << intPair.getFirst() << ", " << intPair.getSecond() << ")" << endl;

    Pair<double> doublePair(1.1, 2.2);
    cout << "Double Pair: (" << doublePair.getFirst() << ", " << doublePair.getSecond() << ")" << endl;

    Pair<string> stringPair("Hello", "World");
    cout << "String Pair: (" << stringPair.getFirst() << ", " << stringPair.getSecond() << ")" << endl;

    return 0;
}