#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() 
{
	int n = 0, m = 0, f = 0;
	string str;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		if (i >= 4&&i<13)
		{
			cout << "NO LOOP\n";
			m = f = 0;
			continue;
		}
		if (i == 13)
		{
			cout << "LOOP\n";
			m = f = 0;
			continue;
		}
		getline(cin, str);
		for (char i : str)
		{
			if (i == 'M')
				m++;
			else if (i == 'F')
				f++;
		}
		if (m == f)
			cout << "LOOP\n";
		else
			cout << "NO LOOP\n";
		m = f = 0;
	}
	return 0;
}