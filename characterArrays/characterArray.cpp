#include <iostream>
using namespace std;

int main()
{

    // char arr[100] = "apple";
    // int i = 0;
    // while (arr[i] != '\0')
    // {
    //     cout << arr[i];
    //     i++;
    // }

    // char arr[100];
    // cin >> arr;
    // cout << arr;

    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            check = 0;
            break;
        }
    }

    if (check)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}