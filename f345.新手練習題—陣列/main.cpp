#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int n = 0;
	while (cin >> n)
	{
		int num = 0,cnt=0;
		vector<int>a;
		vector<int>b;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			a.push_back(num);
		}
		for (int k = n - 1; k >= 0; k--)
		{
			cout << a[k] << " ";
		}
		cout << endl;
		return(0);
	}
}