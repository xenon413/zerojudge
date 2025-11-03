#include<iostream>
using namespace std;
int main(void)
{
	string num,replace,ans;
	int n=0,s=0;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			replace.clear();
			cin >> num;
			s = num.size();
			for (int k = s - 1; k >= 0;k--)
			{
				replace.push_back(num[k]);
			}
			if (i == 0)
			{
				ans = replace;
				continue;
			}
			if (replace.size() > ans.size())
			{
				ans = replace;
				continue;
			}
			if (replace.size() == ans.size())
			{
				for (int j = 0; j < s; j++)
				{
					if (replace[j] > ans[j])
					{
						ans = replace;
						break;
					}
					if (replace[j] < ans[j])
					{
						break;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return(0);
}