#include <bits/stdc++.h>
#define ll long long
using namespace std;

int ascii(string s)
{
    int ans = 0;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        ans += s[i];
    }
    return ans;
}

bool isAnagram(string s1, string s2)
{
    int a1 = ascii(s1);
    int a2 = ascii(s2);
    if (s1.length() != s2.length() || a1 != a2)
    {
        return false;
    }
    return true;
}

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    if (isAnagram(s1, s2))
    {
        cout << "Anagram" << endl;
    }
    else
    {
        cout << "Not Anagram" << endl;
    }
    return 0;
}

// O(n);s