#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];
unordered_map<char, string> m = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};

void solve(vector<string> &v, string s, string ans, int n, int i)
{
    if (i == n)
    {
        v.push_back(ans);
        return;
    }
    string mapped = m[s[i]];
    for (int k = 0; k < mapped.size(); k++)
    {
        char letter = mapped[k];
        solve(v, s, ans + letter, n, i + 1);
    }
}

vector<string> solution(string s)
{
    vector<string> v;
    int n = s.size();
    solve(v, s, "", n, 0);
    return v;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = solution(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}