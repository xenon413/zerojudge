#include<iostream>
using namespace std;
int main(void)
{
	int a = 0;
	int ans = 0;
	while (cin >> a)
	{
		for (int i = 1; i <= a; i++)
		{
			ans += i;
		}
		cout << ans << endl;
	}
	return(0);
}