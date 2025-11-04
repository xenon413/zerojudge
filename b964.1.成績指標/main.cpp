#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n=0,a=0;
	vector<int>m;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			m.push_back(a);
		}
		sort(m.begin(), m.end());
		for (int j = 0; j < n; j++)
		{
			cout << m[j] << " ";
		}
		cout << endl;
		int cnt = 0;
		for (int k = 0; k < n; k++)
		{
			if (m[k] >= 60)
			{
				cnt++;
				if (k == 0)
				{
					cout << "best case" << endl;
					cout << m[0] << endl;
					break;
				}
				cout << m[k - 1]<<endl;
				cout << m[k] << endl;
				break;
			}
		}
		if (cnt == 0)
		{
			cout << m[n - 1] << endl;
			cout << "worst case" << endl;
		}
	}
	return(0);
}