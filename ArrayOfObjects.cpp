#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item:" << id << endl;
        cout << "Price of this item:" << price << endl;
    }
};

int main()
{
    int size = 3;

    ShopItem *ptr = new ShopItem[size];  // Creating an array of Ojects.
    ShopItem *ptrTemp = ptr;

    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of item" << i + 1 << ":";
        cin >> p >> q;

        ptr->setData(p, q);
        ptr++;
        cout << endl;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item no." << i + 1 << ":" << endl;
        ptrTemp->getData();
        ptrTemp++;
        cout << endl;
    }

    return 0;
}