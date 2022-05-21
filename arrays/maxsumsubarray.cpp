#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // bruteforce-->

    // int maxSum = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += arr[k];
    //         }
    //         maxSum = max(sum, maxSum);
    //     }
    // }

    // prefixsum -->

    // int cumsum[n + 1];
    // cumsum[0] = 0;
    // for (int i = 0; i < n + 1; i++)
    // {
    //     cumsum[i] = cumsum[i - 1] + arr[i - 1];
    // }

    // int maxSum = INT_MIN;

    // for (int i = 1; i < n + 1; i++)
    // {
    //     int sum = 0;
    //     maxSum = max(maxSum, cumsum[i]);
    //     for (int j = 1; j <= i; j++)
    //     {
    //         sum = cumsum[i] - cumsum[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // kadanes algorithm

    int currentsum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxSum = max(currentsum, maxSum);
    }

    cout << maxSum << endl;

    return 0;
}