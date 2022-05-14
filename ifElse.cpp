#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {

            cout << "greater is" << a;
        }
        else
        {
            cout << "greater is" << c;
        }
    }
    else
    {
        if (b > c)
        {

            cout << "greater is" << b;
        }
        else
        {
            cout << "greater is" << c;
        }
    }
    return 0;
}