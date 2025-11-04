#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n = 0;
	int a;
	vector<int>w;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			w.push_back(a);
		}
		sort(w.begin(), w.end());
		for (int i = 0; i < n; i++)
		{
			cout << w[i] << " ";
		}
	}

}