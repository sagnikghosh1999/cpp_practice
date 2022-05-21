// floyds triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <iostream>
using namespace std;

int main()
{
    int n, counter = 1;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
    return 0;
}