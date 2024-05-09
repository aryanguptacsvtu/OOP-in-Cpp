#include <iostream>
#include <cstring>
using namespace std;
class student
{
    int rno;
    string name;
    double fee;

public:
    student(int, string, double);
    void display();
};

student::student(int no, string n, double f) // Parameterized constructor outside class
{
    rno = no;
    name = n;
    fee = f;
}
void student::display()
{
    cout << "Output: " << rno << "\t" << name << "\t " << fee;
}

int main()
{
    student s(1001, "Ram", 10000.55);
    s.display();

    return 0;
}