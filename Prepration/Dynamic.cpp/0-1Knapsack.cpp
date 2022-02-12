#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];
// memoization
int knapsack(int *w, int *p, int wt, int n)
{
    if (n == 0 || wt == 0)
    {
        return 0;
    }
    if (dp[n][wt] != -1)
    {
        return dp[n][wt];
    }
    if (w[n - 1] > wt)
    {
        return dp[n][wt] = knapsack(w, p, wt, n - 1);
    }
    else
        return dp[n][wt] = max(p[n - 1] + knapsack(w, p, wt - w[n - 1], n - 1), knapsack(w, p, wt, n - 1));
}
// top Down
int knapsackTop(int *wt, int *p, int w, int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(p[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][w];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int w[4] = {1, 3, 4, 5};
    int p[4] = {1, 4, 5, 7};
    int wt;
    cin >> wt;
    cout << knapsackTop(w, p, wt, 4);

    return 0;
}