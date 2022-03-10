#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

void convert(int num)
{
    char arr[100];
    int i = 0;
    while (num != 0)
    {
        int temp = 0;
        temp = num % 16;
        if (temp < 10)
        {
            arr[i] = temp + 48;
            i++;
        }
        else
        {
            arr[i] = temp + 55;
            i++;
        }
        num = num / 16;
    }
    cout << "0x";
    for (int j = i - 1; j >= 0; j--)
        cout << arr[j];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        float b;
        float c;
        cin >>
            a;
        convert(a);
        cout << "/n";
        cin >> b;
        
    }

    return 0;
}