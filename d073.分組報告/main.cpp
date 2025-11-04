#include<iostream>
using namespace std;
int main(void)
{
	int n = 0;
	while (cin >> n)
	{
		int ans = 0;
		int a = 0;
		a = n % 3;
		switch (a)
		{
		case 0:
			ans = n / 3;
			cout << ans << endl;
			break;
		case 1:
			ans = (n - 1) / 3;
			cout << ans + 1 << endl;
			break;
		case 2:
			ans = (n - 2) / 3;
			cout << ans + 1 << endl;
			break;
		}
		return(0);
	}
}