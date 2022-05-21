#include <iostream>
using namespace std;

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    traversal(arr, n);

    return 0;
}