#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

int DAE(vector<int> v, int i)
{
    int count[100];
    memset(count, 0, sizeof(count));
    int inc = 0;
    int exc = 0;
    for (int val : v)
        count[val]++;
    for (int i = 0; i < 100; i++)
    {
        int ni = exc + count[i] * i;
        int ne = max(inc, exc);

        inc = ni;
        exc = ne;
    }
    return max(inc, exc);
}

int main()
{
    memset(mem, -1, sizeof(mem));
    vector<int> v = {3, 4, 2};
    cout << DAE(v, 0);
    return 0;
}