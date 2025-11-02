#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int a = 0, n = 0, d = 0;
	vector<int>ans;
	while (cin >> a >> n >> d)
	{
		if (a == n)
		{
			cout << a << endl;
			continue;
		}

		int cnt = 0;
		for (int i = a;; i += d)
		{
			ans.push_back(i);
			cnt++;
			if (i == n)
			{
				break;
			}
		}
		for (int k = 0; k < cnt; k++)
		{
			cout << ans[k] << " ";
		}
		cout << endl;
	}
}