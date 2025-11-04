#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
int main(void)
{
	int n = 0,m=1,k=0,ans=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (m == k)
			continue;
		if (m < k)
		{
			ans += (k - m) * 3;
			m = k;
		}
		if (m > k)
		{
			ans += (m-k) * 2;
			m = k;
		}
	}
	cout << ans;
}