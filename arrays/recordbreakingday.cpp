#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    int ans = 0;
    int mx = INT_MIN;

    for (int j = 0; j < n; j++)
    {
        if (a[j] > mx && a[j] > a[j + 1])
        {
            mx = a[j];
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}