#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int num = 0;
	while (cin >> num)
	{
		int cnt = 0,ans=1;
		for (int i = 1;i<num; i++)
		{
			ans += i;
		}
		cout << ans << endl;
	}
	return(0);
}