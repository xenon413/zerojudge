#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	while (true)
	{
		string str;
		cin >> str;
		if (str == "#")break;
		if (next_permutation(str.begin(), str.end()))
			cout << str<<'\n';
		else
			cout << "No Successor\n";

	}
}