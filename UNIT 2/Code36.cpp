#include <iostream>
#include <string> // for string class
using namespace std;
int main()
{
    // Initializing string
    string str = "geeksforgeeks is for geeks";

    cout << "The initial string is : " << str << endl; // Displaying string


    // Resizing string using resize()
    str.resize(13);
    cout << "The string after resize operation is : " << str << endl; // Displaying string

    cout << "The capacity of string is : " << str.capacity() << endl; // Displaying capacity of string

    cout << "The length of the string is :" << str.length() << endl; // Displaying length of the string


    // Decreasing the capacity of string using shrink_to_fit()
    str.shrink_to_fit();
    cout << "The new capacity after shrinking is : " << str.capacity() << endl; // Displaying string
    
    return 0;
}