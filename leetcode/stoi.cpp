#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

int solve(string s)
{
    int sign = 0;
    ll ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-')
        {
            sign = -1;
            continue;
        }
        if (s[i] == '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9' || '0')
        {
            ll temp = int(s[i]) - int('0');
            ans = ans * 10 + temp;
        }
    }
    if (sign == -1)
    {
        return -1 * ans;
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}