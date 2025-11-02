#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int n = 0, num = 0,pro=0,cnt=0;
	vector<int> ans;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		ans.push_back(num);
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (ans[i] > ans[i + 1])
		{
			pro = ans[i];
			ans[i] = ans[i + 1];
			ans[i + 1] = pro;
			cnt++;
			i -= 2;
		}
	}
	cout << cnt;
}