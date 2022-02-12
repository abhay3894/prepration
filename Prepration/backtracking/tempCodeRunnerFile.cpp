#include <bits/stdc++.h>
#define ll long long
using namespace std;

int celebrity(int **arr, int n)
{
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		v.push_back(0);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (arr[i][j] == 1)
			{
				v[j] = v[j] + 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	
}

int main()
{
	int n;
	cin >> n;
	int arr[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << celebrity(arr, n);

	return 0;
}