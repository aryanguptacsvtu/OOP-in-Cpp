#include <iostream>
#include <map>
#include <string>
using namespace std;

void display(map<string, int> &MAP)
{
    map<string, int>::iterator iter;

    for (iter = MAP.begin(); iter != MAP.end(); iter++)
    {
        cout << (*iter).first << ":" << (*iter).second << endl;
    }
}

int main()
{
    map<string, int> marksMap;

    marksMap["Harry"] = 98;
    marksMap["Jack"] = 45;
    marksMap["Rahul"] = 67;

    marksMap.insert({{"Arun", 33}, {"Ankit", 80}});
    display(marksMap);
    cout << endl;

    marksMap.erase("Jack");
    display(marksMap);

    cout << "The size is:" << marksMap.size() << endl;
    cout << "The max. size is:" << marksMap.max_size() << endl;
    cout << "The empty's return value is:" << marksMap.empty() << endl;

    return 0;
}