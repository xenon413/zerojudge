#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string n;
	int cnt = 0;
	vector<string>ch;
	while (cin >> n)
	{
		cnt++;
		ch.push_back(n);
	}
	for (int i = 0; i < cnt; i++)
	{
		if (i == cnt - 1)
		{
			cout << ch[i] << " little ";
			break;
		}
		cout << ch[i] << " little, ";

	}
	cout << "Indians";
}