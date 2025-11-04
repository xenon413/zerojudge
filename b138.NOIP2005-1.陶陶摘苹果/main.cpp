#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	vector<int>v;
	int a = 0, b = 0,c=0,ans=0,cnt=0;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	cin >> b;
	b += 30;
	for (int k = 0; k < 10; k++)
	{
		if (b >= v[k])
		{
			cnt++;
		}
	}
	cout << cnt;
	return(0);
}