#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> stockSpan(vector<int> arr)
{
    stack<pair<int, int>> s;
    vector<int> v;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else if (s.top().first > arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.top().first <= arr[i])
        {
            while (s.size() > 0 && s.top().first <= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> ans = stockSpan(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << i - ans[i] << " ";
    }

    return 0;
}