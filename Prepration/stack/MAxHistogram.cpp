#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> left(vector<int> arr)
{
    stack<pair<int, int>> s;
    vector<int> v;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else if (s.top().first < arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
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
vector<int> right(vector<int> arr)
{
    stack<pair<int, int>> s;
    vector<int> v;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            v.push_back(arr.size());
        }
        else if (s.top().first < arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.top().first >= arr[i])
        {
            while (s.size() > 0 && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(arr.size());
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    reverse(v.begin(), v.end());
    return v;
}

int histogram(vector<int> v)
{
    vector<int> l = left(v);
    vector<int> r = right(v);
    int temp = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int h = v[i] * (r[i] - l[i] - 1);
        if (h > temp)
        {
            temp = h;
        }
    }
    return temp;
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
    cout << histogram(v);

    return 0;
}