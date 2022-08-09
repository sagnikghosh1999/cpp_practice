#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str;

    // cin >> str;
    // cout << str;
    // string str1(5, 'n');
    // cout << str1 << endl;

    // getline(cin, str);
    // cout << str << endl;

    // string s1 = "fam";
    // string s2 = "ily";

    // s1.append(s2);
    // cout << s1 << endl;

    // cout << s1 + s2 << endl;

    // string str1 = "family";
    // cout << str1[1] << endl;
    // cout << str1 << endl;
    // str1.clear();
    // cout << str1 << endl;

    // string s1 = "abc";
    // string s2 = "xyz";

    // cout << s2.compare(s1) << endl;

    // string s1 = "abc";
    // cout << s1 << endl;
    // s1.clear();
    // if (s1.empty())
    // {
    //     cout << "string is empty";
    // }

    // string s1 = "nincompoop";

    // s1.erase(3, 3); //(index of first character to delete, number of characters to delt)

    // cout << s1 << endl;

    // cout << s1.find("com") << endl;
    // cout << s1.find("poo") << endl;

    // string s1 = "lovely";
    // s1.insert(2, "ind");
    // cout << s1 << endl;

    // cout << s1.size();
    // cout << s1.length();

    // for (int i = 0; i < s1.length(); i++)
    // {
    //     cout << s1[i] << endl;
    // }

    // string subs1 = s1.substr(6, 4);
    // cout << subs1 << endl;

    // string str1 = "786";
    // int x = stoi(str1); // string to integer
    // cout << x << endl;

    // int y = 12;
    // string s = to_string(y) + "2";
    // cout << s << endl;

    string s1 = "qwertyuiopasdfghjklzxcvbnm";
    sort(s1.begin(), s1.end()); // sorting in strings

    cout << s1 << endl;

    return 0;
}