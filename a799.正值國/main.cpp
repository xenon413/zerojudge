#include<iostream>
using namespace std;
int main()
{
	int n=0;
	while (cin >> n)
	{
		int ans;
		if (n >= 0)
			cout << n;
		if (n < 0)
		{
			ans=n* -1;
			cout << ans;
		}
	}
}