#include <iostream>
#include <string>
using namespace std;
// to upper case

int main()
{
    string str;
    getline(cin, str);

    // convert uppercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        cout << str[i];
    }

    return 0;
}