#include <iostream>
#include<string>
using namespace std;
int one(int a)
{
	int b = 0;
	b = a / 1000 * 100;
	return(b);
}
int two(int a)
{
	int b;
	b = a / 2000 * 200;
	return(b);
}
int main()
{
	int n=0;
	while (cin >> n)
	{
		int ans2 = 0, ans1 = 0;
		ans1 = n - one(n);
		if (one(n) == two(n))
		{
			ans2 = 0;
		}
		else
			ans2 = 1;
		cout << ans1 << " " << ans2;
	}
}