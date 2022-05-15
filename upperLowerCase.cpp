
// Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character :";
    cin >> ch;
    int ascii = ch;
    if (ascii >= 65 && ascii <= 90)
    {
        cout << "UpperCase";
    }
    if (ascii >= 97 && ascii <= 122)
    {
        cout << "LowerCase";
    }
    return 0;
}