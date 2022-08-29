#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];

void crossPattern(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if(i == j || j == (n + 1 - i))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void pyramid(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			
		}
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	crossPattern(n);
	pyramid(n);
	
	return 0;
}