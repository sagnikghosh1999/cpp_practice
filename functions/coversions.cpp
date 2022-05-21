#include <iostream>

using namespace std;

int binarytoDecimal(int n)
{
    int ans = 0;
    int x = 1;
    int y;

    while (n > 0)
    {
        y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octaltoDecimal(int n)
{
    int ans = 0;
    int x = 1;
    int y;

    while (n > 0)
    {
        y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimaltoDecimal(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * ((n[i] - 'A') + 10);
        }
        x *= 16;
    }
    return ans;
}

int decimalToBinary(int n)
{
    int x = 1;
    int ans = 0;
    while (x < n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastDigit = n / x;      //--> 13 / 8 = 1 // 5/4=1
        n -= lastDigit * x;         // 13 - 1 * 8 = 5 // 5-1*4 = 1
        ans = ans * 10 + lastDigit; // 1 //11
        x /= 2;                     // 8 / 2 = 4; 4/2 =2
    }
    return ans;
}

int decimalToOctal(int n)
{
    int x = 1;
    int ans = 0;
    while (x < n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        ans = ans * 10 + lastDigit;
        x /= 8;
    }
    return ans;
}

// function to convert decimal to hexadecimal
void decimalToHexadecimal(int n)
{
    // char array to store hexadecimal number
    char hexaDeciNum[100];

    // counter for hexadecimal number array
    int i = 0;
    while (n > 0)
    {
        // temporary variable to store remainder
        int temp = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
        if (temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }

    // printing hexadecimal number array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}

int main()
{

    int n;
    cin >> n;
    // string s;
    // cin >> s;

    // cout << decimalToBinary(n);
    decimalToHexadecimal(n);

    // cout << hexadecimaltoDecimal(s);

    return 0;
}