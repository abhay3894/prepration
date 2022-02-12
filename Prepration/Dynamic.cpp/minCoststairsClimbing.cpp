#include <bits/stdc++.h>
#define ll long long
using namespace std;

int minimumCost(int n, int arr[])
{
    if (n == 1 || n == 0)
    {
        return arr[n];
    }
    arr[n] += min(minimumCost(n - 1, arr), minimumCost(n - 2, arr));
    return min(arr[n - 1], arr[n - 2]);
}
int main()
{
    int a[] = {3, 5, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << minimumCost(n, a);
    return 0;
}
