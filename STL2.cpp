#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    cout << "List:";
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of zero length
    list1.push_back(5);
    list1.push_back(80);
    list1.push_back(34);
    list1.push_back(77);
    list1.push_back(34);
    list1.push_back(100);
    display(list1);

    list1.pop_back(); // Removing elements from List
    list1.pop_front();
    list1.remove(34);
    display(list1);

    list<int> list2(4); // Empty list of size 4

    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 33;
    iter++;
    *iter = 65;
    iter++;
    *iter = 500;

    display(list2);

    list2.reverse(); // Reversing the list
    display(list2);

    list1.sort(); // Sorting a list
    list2.sort();

    list1.merge(list2);
    cout << "List1 after merging:\n";
    display(list1);

    return 0;
}