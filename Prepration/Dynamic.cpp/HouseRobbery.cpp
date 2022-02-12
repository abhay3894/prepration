#include <bits/stdc++.h>
#define ll long long
using namespace std;
int arr[100];
int robbery(vector<int> v, int n)
{
    if (n >= v.size())
    {
        return 0;
    }
    if (arr[n] != -1)
    {
        return arr[n];
    }
    return arr[n] = max(v[n] + robbery(v, n + 2), robbery(v, n + 1));
}

int main()
{
    memset(arr, -1, sizeof(arr));
    vector<int> v = {2, 7, 9, 3, 1};
    cout << robbery(v, 0);
    return 0;
}