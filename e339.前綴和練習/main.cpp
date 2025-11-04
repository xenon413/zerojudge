#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	long long int n = 0,num=0,ans=0;
	vector<long long int>a;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			ans += num;
			cout << ans<<" ";
		}
		cout << endl;
	}
	return(0);
}