#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main(void)
{
	int n = 0;
	int num=0,ans=0;
	vector<int>v, position;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
		if (num == 0)
			position.push_back(i);
	}
	for (int i : position)
	{
		if (i == 0)
		{
			ans += v[i + 1];
			continue;
		}
		if (i == v.size() - 1)
		{
			ans += v[i - 1];
			continue;
		}
		if (v[i - 1] > v[i + 1])
			ans += v[i + 1];
		else
			ans += v[i - 1];
	}
	cout << ans;
}