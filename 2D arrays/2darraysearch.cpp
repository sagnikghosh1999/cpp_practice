#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int target;
    cin >> n >> m >> target;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int r = 0, c = m - 1;
    bool flag = false;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            cout << "Element found at arr[" << r << "][" << c << "]" << endl;
            flag = true;
            break;
        }
        else if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (flag)
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}