#include<iostream>

using namespace std;

int main(void)
{
	string s;
	int l, num1, num2, ans;
	while (cin >> s)
	{
		l = s.size();
		for (int i = 0; i < l - 1; i++)
		{
			num1 = s[i];
			num2 = s[i + 1];
			ans = num2 - num1;
			if (ans < 0)
			{
				ans = ans * -1;
			}
			cout << ans;
		}
		cout << endl;
	}
}