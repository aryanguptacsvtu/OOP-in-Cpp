#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    void insert(int i, string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout << "Student:"<<id << "," << name << endl;
    }
};

int main()
{
    Student s1;
    Student s2;

    s1.insert(200, "Sonu");
    s2.insert(201, "Arun");

    s1.display();
    s2.display();

    return 0;
}