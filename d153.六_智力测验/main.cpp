#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n = 0,m=0,ans=0,num=0;
	vector<int>v;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			for (int k = 0; k < m; k++)
			{
				cin >> num;
				v.push_back(num);
			}
			sort(v.begin(), v.end());
			if (m % 2 == 1)
			{
				ans = v[(m - 1) / 2];
			}
			if (m % 2 == 0)
			{
				ans = v[m / 2 - 1];
			}
			cout << ans << endl;
			v.clear();
		}
	}
	return(0);
}