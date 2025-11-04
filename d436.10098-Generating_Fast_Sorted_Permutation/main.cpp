#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	int n;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		sort(str.begin(), str.end());
		do
		{
			cout << str<<'\n';
		} while (next_permutation(str.begin(), str.end()));
		cout << '\n';
	}
}