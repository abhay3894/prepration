#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];

int steps(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (mem[n] != -1)
    {
        return mem[n];
    }

    return mem[n] = steps(n - 1) + steps(n - 2);
}

int main()
{
    memset(mem, -1, sizeof(mem));
    int n;
    cin >> n;
    cout << steps(n);

    return 0;
}