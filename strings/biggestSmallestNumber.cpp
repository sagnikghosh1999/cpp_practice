#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // biggest number
    sort(s.begin(), s.end(), greater<int>()); //(desc order)
    cout << s << endl;
    sort(s.begin(), s.end());
    cout << s << endl;

    return 0;
}