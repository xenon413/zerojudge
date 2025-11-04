#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n = 0,m=0;
	vector<int>l;
	while (cin >> n)
	{
		if (n == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			l.push_back(m);
		}
		sort(l.begin(), l.end());
		for (int k = 0; k < n; k++)
		{
			cout << l[k] << " ";
		}
		cout << endl;
		l.clear();
	}
	return(0);
}