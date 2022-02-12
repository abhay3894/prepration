#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];


//taking set as a reference to find weather we choose first element or not
//if yes then we'll not consider the last element hence we'll return 0;

int robbery(vector<int> v, int i, int set)
{
    if (i >= v.size())
    {
        return 0;
    }
    if (dp[i][set] != -1)
    {
        return dp[i][set];
    }
    if (i == 0)
    {
        return dp[i][set] = max(v[i] + robbery(v, i + 2, 1), robbery(v, i + 1, set));
    }
    if (i == v.size() - 1 && set == 1)
    {
        return 0;
    }
    return dp[i][set] = max(v[i] + robbery(v, i + 2, 1), robbery(v, i + 1, set));
}

int main()
{
    memset(dp, -1, sizeof(dp));
    vector<int> v = {2, 3, 2};
    cout << robbery(v, 0, 0);

    return 0;
}