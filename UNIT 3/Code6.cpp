#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    int id;
    char name[50];

public:
    void setp(int, char[]);
    void displayp();
};

void Person::setp(int id, char n[])
{
    this->id = id;
    strcpy(this->name, n);
}

void Person::displayp()
{
    cout << "Id:" << id << " " << ",Name:" << name << endl;
}

class Student : private Person
{
    char course[50];
    int fee;

public:
    void set_s(int, char[], char[], int);
    void display_s();
};

void Student ::set_s(int id, char n[], char c[], int f)
{
    setp(id, n);
    strcpy(course, c);
    fee = f;
}

void Student::display_s()
{
    displayp();
    cout << "Course:" << course << " " << ",Fee:" << fee;
}

int main()
{
    Student s;
    s.set_s(1001, "Ram", "B.Tech", 20000);
    s.display_s();

    return 0;
}