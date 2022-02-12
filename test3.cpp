#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 2e5 + 5, mod = 1e9 + 7;

ll fac[sz];

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0, x; i < n; i++)
        scanf("%d", &x), mp[x]++;

    map<int, int> d;
    for (auto &it : mp)
    {
        int c = it.second;
        for (int i = 1; i <= c; i++)
        {
            int y = c - i, x = i - 1;
            d[y - x]++;
        }
    }

    ll ans = 1;
    for (auto &it : d)
        ans = ans * fac[it.second] % mod;
    cout << ans << endl;
}

int main()
{
    fac[0] = 1;
    for (int i = 1; i < sz; i++)
        fac[i] = fac[i - 1] * i % mod;
    int t;
    cin >> t;
    while (t--)
        solve();
}