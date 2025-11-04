#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, m,num,ans=0,cnt=0;
	vector<int>pro, got;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			cin >> num;
			pro.push_back(num);
		}
		sort(pro.begin(), pro.end());
		ans += pro.back();
		got.push_back(pro.back());
		pro.clear();
	}
	cout << ans<<endl;
	for (int i=0;i<got.size();i++)
	{
		if (ans % got[i] == 0)
		{
			if (cnt != 0)
				cout << ' ';
			cout << got[i];
			cnt++;
		}
	}
	if (cnt == 0)
		cout << -1;
}