#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n = 0,num=0;
	vector<int>v;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		for (int k = 0; k < n; k++)
		{
			cout << v[k] << " ";
		}
		cout << endl;
		for (int j = n - 1; j >= 0; j--)
		{
			if (v[j] == v[j + 1])
				continue;
			cout << v[j]<<" ";
		}
		cout << endl;
	}
}