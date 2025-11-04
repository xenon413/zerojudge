#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n = 0;
	while (cin >> n)
	{
		int num = 0;
		vector<int>a;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			a.push_back(num);
		}
		sort(a.begin(), a.end());
			cout << a[n - 1]<<endl;
	}
	return(0);
}