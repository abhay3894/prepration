#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool redundant(string &str)
{
    stack<char> st;
    for (auto &ch : str)
    {
        if (ch == ')')
        {
            char top = st.top();
            st.pop();
            bool flag = true;

            while (top != '(')
            {
                flag = false;
                if (!st.empty())
                {
                    top = st.top();
                    st.pop();
                }
            }
            if (flag == true)
                return true;
        }

        else
            st.push(ch);
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    if (redundant(s))
    {
        cout << "Duplicates";
    }
    else
    {
        cout << "No duplicates";
    }

    return 0;
}