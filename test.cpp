#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

int main()
{
    int a, b;
    cin >> a >> b;
    int max = 0;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    int temp = 0;
    int temp2 = 0;
    for (int i = 0; i <= max; i++)
    {
        for (int j = i; j <= max; j++)
        {
            if ((i + j) == a && (i ^ j) == b)
            {
                temp = i;
                temp2 = j;
                cout << temp << " " << temp2;
                return;
            }
        }
    }
    return 0;
}