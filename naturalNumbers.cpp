// Write a program in C++ to find the first n natural numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter ther value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\t";
    }
    return 0;
}