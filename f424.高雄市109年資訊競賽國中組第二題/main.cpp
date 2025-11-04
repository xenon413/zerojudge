#include<iostream>
using namespace std;
int main(void)
{
	int n = 0;
	int ans = 1,ans1=3;
	while (cin >> n)
	{
		for (int i = 1; i < n;)
		{
			ans += ans1;
			i++;
			if (i >= n)
			{
				ans = ans1;
				break;
			}
			ans1 += ans;
			i++;
		}
		cout << ans<<endl;
		ans = 1;
		ans1 = 3;
	}
		

}