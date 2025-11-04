#include<iostream>
#include<vector>
using namespace std;
int pow(int a, int b)
{
	int c = 1;
	if (b == 0)
	{
		return(1);
	}
	for (int i = 0; i < b; i++)
	{
		c *= a;
	}
	return(c);
}
int time(int a)
{
	int cnt=0;
	if (a % 3 == 0)
	{
		cnt = 0;
	}
	if (a % 3 == 1)
	{
		cnt = 1;
	}
	if (a % 3 == 2)
	{
		cnt = 2;
	}
	return(cnt);
}
int main(void)
{
	int n;
	while (cin >> n)
	{
		int  a = 0,cnt=0,ans=0;
		int r = 1, g = 0, b = 0;
		
		for (int i = 1; i < n; n--)
		{
			if (n == 1)
			{
				break;
			}
			a = pow(2, n-1);
			cnt= time(a);
			ans = (a - cnt) / 3;
			r += ans;
			g += ans;
			b += ans;
			if (cnt == 1)
			{
				r += 1;
			}
			if (cnt == 2)
			{
				r += 1;
				g += 1;
			}
		}
		cout << r<<" "<<g<<" "<<b<<endl;
	}
	return(0);
}