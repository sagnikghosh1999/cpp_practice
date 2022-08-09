#include <iostream>
#include <string>
using namespace std;
// upper to lower

int main()
{
    string str;
    getline(cin, str);

    // convert uppercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        cout << str[i];
    }

    return 0;
}