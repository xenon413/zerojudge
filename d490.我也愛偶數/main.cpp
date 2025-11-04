#include<iostream>
using namespace std;
int main(void)
{
	int s = 0, e = 0;
	while (cin >> s >> e)
	{
		if (s % 2 == 1)
		{
			s++;
		}
		int ans = 0;
		for (int i = s; i <= e; i += 2)
		{
			ans += i;
		}
		cout << ans << endl;
	}
	return(0);
}