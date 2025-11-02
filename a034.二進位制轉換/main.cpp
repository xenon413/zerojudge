#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n=0,cnt=0;
	vector<int>v;
	while (cin >> n)
	{
		cnt = 0;
		v.clear();
		while (n>=1)
		{
			if (n % 2 == 0) 
			{
				n /= 2;
				v.push_back(0);
				cnt++;
			}
			if (n % 2 == 1)
			{
				n=(n - 1) / 2;
				v.push_back(1);
				cnt++;
			}
			
			if (n == 1)
			{
				v.push_back(1);
				cnt++;
				break;
			}
		}
		for (int i = cnt-1; i >=0; i--)
		{
			cout << v[i];
		}
		cout << endl;
	}

	return(0);
}