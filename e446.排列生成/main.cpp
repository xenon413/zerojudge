#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(void)
{
	vector<int>vec;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		vec.push_back(i);
	}
	do 
	{
		for (int i : vec)
			cout << i << ' ';
		cout << '\n';
	} while (next_permutation(vec.begin(), vec.end()));
}