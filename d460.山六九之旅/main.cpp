#include <iostream>
using namespace std;
int cost(int a)
{
	if (a <= 5)
	{
		return(0);
	}
	if (11 >= a && 6 <= a)
	{
		return(590);
	}
	if (17 >= a && 12 <= a)
	{
		return(790);
	}
	if (59 >= a && 18 <= a)
	{
		return(890);
	}
	if (a >= 60)
	{
		return(399);
	}
}
int main()
{
	int n=0;
	while (cin >> n)
	{
		int ans = 0;
		ans = cost(n);
		cout << ans << endl;
	}
}