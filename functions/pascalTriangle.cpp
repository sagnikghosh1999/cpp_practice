
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1

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

    cout << " enter number of rows: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}