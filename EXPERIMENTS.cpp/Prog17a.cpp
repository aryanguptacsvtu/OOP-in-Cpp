#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using function template with different data types
    cout << "Int addition: " << add<int>(3, 5) << endl;
    cout << "Double addition: " << add<double>(2.5, 4.7) << endl;
    cout << "String addition: " << add<string>("Hello, ", "World!") << endl;

    return 0;
}
