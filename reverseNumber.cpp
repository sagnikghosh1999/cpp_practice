// reverse number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int temp = n, rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reversed number is : " << rev;

    return 0;
}