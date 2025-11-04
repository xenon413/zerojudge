#include<iostream>
using namespace std;
int main(void)
{
	int s = 0, e = 0;
	while (cin >> s >> e)
	{
		if (s == e)
		{
			if (s % 2 == 0)
				cout << s;
			else
				cout << 0;
			continue;
		}	
		int ans = 0;
		if (s < e)
		{
			if (s % 2 == 1)
			{
				s++;
			}
			for (int i = s; i <= e; i += 2)
			{
				ans += i;
			}
		}
		if (e < s)
		{
			if (e % 2 == 1)
			{
				e++;
			}
			for (int i = e; i <= s; i += 2)
			{
				ans += i;
			}
		}
		
		cout << ans << endl;
	}
	return(0);
}