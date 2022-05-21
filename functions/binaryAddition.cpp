#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }
    return rev;
}

int binaryAdd(int a, int b)
{
    int ans = 0, prevCarry = 0;
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (b % 2 == 0 && a % 2 == 1))
        {
            if (prevCarry)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }

        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while (a > 0)
    {
        if (prevCarry)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + a % 2;
            prevCarry = 0;
        }
        a /= 10;
    }
    while (b > 0)
    {
        if (prevCarry)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + b % 2;
            prevCarry = 0;
        }
        b /= 10;
    }

    if (prevCarry)
    {
        ans = ans * 10 + prevCarry;
    }

    ans = reverse(ans);
    return ans;
}

int main()
{

    int a, b;
    cin >> a >> b;
    cout << binaryAdd(a, b);
    // cout << reverse(n);
    return 0;
}