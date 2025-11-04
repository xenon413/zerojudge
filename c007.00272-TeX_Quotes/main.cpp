#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string n,ans;
	bool check = 0;
	while (getline(cin, n))
	{
		ans.clear();
		for (char i:n)
		{
			if (i == '\"')
			{
				if (check == 1)
				{
					ans.push_back('\'');
					ans.push_back('\'');
					check = 0;
					continue;
				}
				ans.push_back('`');
				ans.push_back('`');
				check = 1;
				continue;
			}
			ans.push_back(i);
		}
		cout << ans << endl;
	}
	return 0;
}