#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>num;
	int a = 0, b = 0,cnt1=0;
	while (cin >> a)
	{
		cnt1++;
		if (a == 0)
		{
			break;
		}
		int cnt=0;
		for (int i = 0; i < a; i++)
		{
			cin >> b;
			cnt += b;
			num.push_back(b);
		}
		cnt /= a;
		int ans = 0;
		for (int k = 0; k < a; k++)
		{
			if (num[k] > cnt)
			{
				ans += num[k] - cnt;
			}
		}
		cout << "Set #" << cnt1<< endl;
		cout << "The minimum number of moves is " << ans<<"." << endl;
		ans = 0;
		num.clear();
	}
}