#include <iostream>
using namespace std;

int factorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int combination(int n, int r)
{
    return ((factorial(n) / ((factorial(r) * factorial(n - r)))));
}

int main()
{

    int a, b;
    cout << "Enter 2 numbers";
    cin >> a >> b;
    cout << a << "C" << b << " = " << combination(a, b);
    return 0;
}