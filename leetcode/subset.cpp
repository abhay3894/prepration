#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];
string str[100];

void subset(string s, string op = "", int index = 0)
{
    if (index == s.length())
    {
        cout << "[" << op << "]"
            << " ";
        return;
    }
    subset(s, op, index + 1);
    subset(s, op + s[index], index + 1);
}

int main()
{
    string s;
    cin >> s;
    subset(s);
    return 0;
}