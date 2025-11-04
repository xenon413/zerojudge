#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n = 0, m = 0, num = 0;
	vector<int>v;
	vector<int>v1;
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
			v1.push_back(v[0]);
			v.clear();
		}
		sort(v1.begin(), v1.end());
		cout << v1[n - 1];
		v1.clear();
	}
	return(0);
}