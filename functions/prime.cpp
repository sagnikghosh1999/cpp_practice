#include <iostream>
using namespace std;

bool isPrime(int i)
{
    for (int j = 2; j * j <= i; j++)
    {
        if (i % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int a, b;
    cout << "Enter the lower bound : ";
    cin >> a;
    cout << "Enter the upper bound : ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (i != 1 && isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}