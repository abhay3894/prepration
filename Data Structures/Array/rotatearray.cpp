#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

void leftrotate(int *arr, int n, int k)
{
    int temp[n];
    int p = 0;
    for (int i = k + 1; i < n; i++)
    {
        temp[p] = arr[i];
        p++;
    }
    for (int i = 0; i <= k; i++)
    {
        temp[p] = arr[i];
        p++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
void rightrotate(int *arr, int n, int k)
{
    int temp[n];
    int p = 0;
    for (int i = k; i < n; i++)
    {
        temp[p] = arr[i];
        p++;
    }
    for (int i = 0; i < k; i++)
    {
        temp[p] = arr[i];
        p++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int k;
    cin >> k;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Before Rotation" << endl;
    print(arr, 5);
    leftrotate(arr, 5, k);
    cout << "After Rotation left Rotate" << endl;
    print(arr, 5); //{4, 5, 1, 2, 3}
    // rightrotate(arr, 5, k);
    // cout << "After Rotation right Rotate" << endl;
    // print(arr, 5); //{3, 4, 5, 1, 2}
    return 0;
}