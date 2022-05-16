// Write a program in C++ to find the sum of first 10 natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << " The sum is : " << sum;
    return 0;
}