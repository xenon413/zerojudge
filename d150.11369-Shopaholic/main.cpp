#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int t = 0, n = 0;
	int pi = 0;
	int ans = 0,cnt=0;
	vector<int>m;
	while (cin >> t)
	{
		for (int i = 0; i < t; i++)
		{
			ans = 0;
			cnt = 0;
			m.clear();
			cin >> n;
			for (int k = 0; k < n; k++)
			{
				cin >> pi;
				m.push_back(pi);
				cnt++;
			}
			if (cnt < 3)
			{
				cout << 0 << endl;
				continue;
			}
			sort(m.begin(),m.end());
			reverse(m.begin(), m.end());
			for (int j = 2; j < cnt; j += 3)
			{
				if (j > cnt)
					break;
				ans += m[j];
			}
			cout << ans<<endl;
			
		}
	}
	return(0);
}