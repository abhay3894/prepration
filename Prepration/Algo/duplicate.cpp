#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isDuplicate(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int freq = upper_bound(v.begin(), v.end(), v[i]) - lower_bound(v.begin(), v.end(), v[i]);
        cout << freq;
        if (freq > 1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> v = {1, 3};
    if (isDuplicate(v))
    {
        cout << "True";
    }
    else
    {
        cout << "Flase";
    }

    return 0;
}