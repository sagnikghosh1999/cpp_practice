#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    cout << "Enter the length & breadth : ";
    cin >> length >> breadth;
    if (length == breadth)
    {
        cout << "It is a square";
    }
    else
    {
        cout << "It is not a square";
    }
    return 0;
}