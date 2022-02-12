#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if (s[i] == '*')
                {
                    int p = a * b;
                    st.push(p);
                }
                else if (s[i] == '+')
                {
                    int p = a + b;
                    st.push(p);
                }
                else if (s[i] == '-')
                {
                    int p = b - a;
                    st.push(p);
                }
                else if (s[i] == '/')
                {
                    int p = b / a;
                    st.push(p);
                }
            }
            else
            {
                int a = s[i] - '0';
                st.push(a);
            }
        }
        cout << st.top() << endl;
    }

    return 0;
}