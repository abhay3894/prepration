#include <bits/stdc++.h>
#define ll long long
using namespace std;

int arr[100][100];

int celebrity(int n)
{
    vector<int> v;
    int h[n];
    memset(h, 0, sizeof(h));
    for (int i = 0; i < n; i++)
    {
        v.push_back(0);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            h[i] += arr[i][j];
            if (arr[i][j] == 1)
            {
                v[j] = v[j] + 1;
            }
        }
    }

    int index = -1;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            index = i - 1;
        }
    }
    if (h[index] == 0)
    {
        return index;
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (celebrity(n) == -1)
    {
        cout << "No Celebrity";
    }
    else
    {
        cout << celebrity(n) << endl;
    }

    return 0;
}