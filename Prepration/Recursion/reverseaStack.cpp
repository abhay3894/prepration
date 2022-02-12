#include <bits/stdc++.h>
#define ll long long
using namespace std;

void insert(stack<int> &s, int temp)
{
    if (s.size() == 0)
    {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
    return;
}

void reverse(stack<int> &s)
{
    if (s.size() == 1)
        return;
    int val = s.top();
    s.pop();
    reverse(s);
    insert(s, val);
    return;
}

int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    reverse(s);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}