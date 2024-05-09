#include <iostream>
#include <string> // For string class
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string:";
    getline(cin, str);
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    
    str.push_back('s');    // Inserting a character
    cout << "The string after push_back operation is : "<< str << endl; // Displaying string

 
    str.pop_back();    // Deleting a character
    cout << "The string after pop_back operation is : ";  // Displaying string  
    cout << str << endl;

    return 0;
}