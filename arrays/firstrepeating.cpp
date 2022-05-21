#include <iostream>
#include <climits>

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
	cout << endl;

	int N = 1e5 + 2;
	int idx[N];
	for (int i = 0; i < N; i++)
	{
		idx[i] = -1;
	}

	int minidx = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		if (idx[arr[i]] != -1)
		{
			minidx = min(minidx, idx[arr[i]]);
		}
		else
		{
			idx[arr[i]] = i;
		}
	}

	if (minidx == INT_MAX)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << minidx + 1 << endl;
	}

	return 0;
}
