#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int a = 0;
	vector<int>n;
	while (cin >> a)
	{
		n.push_back(a);
	}
	sort(n.begin(), n.end());
	cout << n[2] << endl;
}