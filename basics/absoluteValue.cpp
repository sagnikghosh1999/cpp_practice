// Write a program to print absolute vlaue of a number entered by user. E.g.-
// INPUT: 1        OUTPUT: 1
// INPUT: -1        OUTPUT: 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter A ineteger";
    cin >> n;
    if (n < 0)
    {
        n = n * -1;
    }
    cout << "Absolute value of the number is : " << n << endl;
    return 0;
}