#include <bits/stdc++.h>
using namespace std;

bool isValid(string str)
{
    int length = str.length();
    if (length % 2 != 0)
    {
        return false;
    }
    stack<char> s;
    char top;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
        {
            s.push(str[i]);
        }
        if (s.empty())
        {
            return false;
        }

        switch (str[i])
        {
        case '}':
            top = s.top();
            s.pop();
            if (top == '(' || top == '[')
            {
                return false;
            }
            break;
        case ']':
            top = s.top();
            s.pop();
            if (top == '(' || top == '{')
            {
                return false;
            }
            break;
        case ')':
            top = s.top();
            s.pop();
            if (top == '{' || top == '[')
            {
                return false;
            }
            break;
        }
    }
    return s.empty();
}
int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}