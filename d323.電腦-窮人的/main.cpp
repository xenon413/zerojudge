#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n=0,m=0;
	vector<int>num;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			num.push_back(m);
		}
		sort(num.begin(), num.end());
		for (int k = 0; k < n; k++)
		{
			cout << num[k]<<" ";
		}
		cout << endl;
	}
	return(0);
}