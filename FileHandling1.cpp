#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "This is a sample file.";
    string st2, st3;
    // Opening file using Constructor:-

    ofstream out("sample1.txt");   // "Write" Operation
    out << st;
    out.close();

    ifstream in("sample1.txt");
    in >> st2;                     // "Read" Operation
    cout << st2;
    cout << "\nUsing getline():-" << endl;
    getline(in, st3);
    cout << st3;

    return 0;
}