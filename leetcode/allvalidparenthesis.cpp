#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

void solve(int a, int b, vector<string> &v, string ans)
{
    if (a == 0 && b == 0)
    {
        v.push_back(ans);
        return;
    }
    if (a != 0)
    {
        string temp = ans;
        temp.push_back('(');
        solve(a - 1, b, v, temp);
    }
    if (b > a)
    {
        string temp = ans;
        temp.push_back(')');
        solve(a, b - 1, v, temp);
    }
    return;
}

vector<string> valid(int n)
{
    int a = n, b = n;
    vector<string> v;
    solve(a, b, v, "");
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = valid(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}