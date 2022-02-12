#include <bits/stdc++.h>
using namespace std;
vector<char> front;
vector<char> rear;

void insert(string s)
{
    int n = s.length();
    front.push_back(s[0]);
    rear.push_back(s[n - 1]);
}
bool check()
{
    if (front.size() != rear.size())
    {
        return false;
    }
    sort(front.begin(), front.end());
    sort(rear.begin(), rear.end());
    for (int i = 0; i < front.size(); i++)
    {
        if (front[i] != rear[i])
        {
            return false;
        }
    }
    return true;
}
bool solution(string *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        insert(s[i]);
    }
    if (check())
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (solution(arr, n))
    {
        cout << "True" << endl;
    }
    else
        cout << "False" << endl;

    return 0;
}