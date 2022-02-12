#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mem[100];

int tribonnaci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n <= 2)
    {
        return 1;
    }
    if (mem[n] != -1)
    {
        return mem[n];
    }
    return mem[n] = tribonnaci(n - 3) + tribonnaci(n - 2) + tribonnaci(n - 1);
}

int main()
{
    memset(mem, -1, sizeof(mem));
    int n;
    cin >> n;
    cout << tribonnaci(n);
    return 0;
}