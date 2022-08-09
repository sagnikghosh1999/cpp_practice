#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    string ans = "a";
    int maxF = 0;

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (maxF < freq[i])
        {
            ans = ('a' + i);
            maxF = freq[i];
        }
        else if (maxF == freq[i])
        {
            ans += ('a' + i);
        }
    }
    cout << maxF << " " << ans << endl;

    return 0;
}