#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Vector:";
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";  [VALID]
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;     // Zero length integer vector
    int element, size;

    cout << "Enter the size of your vector:";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element to add to this vector:";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter + 1, 3, 88);
    display(vec1);

    vector<char> vec2(4);      // 4-element character vector
    vec2.push_back('x');
    vec2.push_back('q');
    vec2.push_back('c');
    display(vec2);

    vector<char> vec3(vec2);   // 4-element char vector from vec2
    display(vec3);
    cout << "Size:" << vec3.size() << endl;

    vector<int> vec4(6, 13);   // 6-element vector of 3s
    display(vec4);
    vec4.push_back(1000);
    display(vec4);
    cout << "Front:" << vec4.front() << endl;
    cout << "Back:" << vec4.back();
    
    return 0;
}