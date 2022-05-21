#include <iostream>
using namespace std;

// int pairsum(int arr[], int n, int k)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 cout << i << "  " << j << endl;
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

int pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (high > low)
    {
        if (arr[high] + arr[low] == k)
        {
            cout << low << "  " << high << endl;
            return 1;
        }
        else if (arr[high] + arr[low] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return 0;
}

int main()
{

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    cout << pairsum(arr, 8, k) << endl;
    return 0;
}