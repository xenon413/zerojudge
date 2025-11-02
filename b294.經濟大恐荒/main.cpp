#include<iostream>
using namespace std;
int main(void)
{
	int n = 0;
	while (cin >> n)
	{
		int num = 0,ans=0;
		for (int i = 1; i <= n; i++)
		{
			cin >> num;
			ans += num * i;
		}
		cout << ans << endl;
		return(0);
	}
}