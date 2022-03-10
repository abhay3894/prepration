#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

int removeElement(vector<int> &v, int val)
{
    sort(v.begin(), v.end());
    int n = v.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == val)
        {
            v[i] = INT_MAX;
            count++;
        }
    }
    return n - count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int val;
    cin >> val;
    cout << removeElement(v, val);

    return 0;
}