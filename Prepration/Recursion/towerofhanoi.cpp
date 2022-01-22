#include <bits/stdc++.h>
#define ll long long
using namespace std;

void TOH(int n, char s, char h, char d)
{
    if (n == 0)
    {
        return;
    }
    TOH(n - 1, s, d, h);
    cout << "move plate : " << n << " from : " << s << " to : " << d;
    cout << "\n";
    TOH(n - 1, h, s, d);
}

int main()
{
    int n;
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}