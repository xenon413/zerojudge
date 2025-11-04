#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string n;
	cin >> n;
	for (int i = 0; i < n.size(); i++)
	{
		cout << n[i];
		if (i != n.size() - 1)
			cout << "-";
	}
}