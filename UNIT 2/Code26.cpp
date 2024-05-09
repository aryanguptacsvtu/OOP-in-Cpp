#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int rno;
    string name;
    double fee;

public:
    student(int, string, double);
    student(student &t) // copy constructor
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
    }
    void display();
};
student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}
void student::display()
{
    cout << "Output: " << rno << " " << name << " " << fee << endl;
}

int main()
{
    student s(1001, "Manjeet", 10000.7);
    s.display();

    student hello(s); // copy constructor called
    hello.display();

    return 0;
}