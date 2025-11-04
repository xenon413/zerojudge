#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string n, m;
	int s = 0;
	while (cin >> n)
	{
		getline(cin, m);
		s = m.size();
		for (int i = 0; i < s; i++)
		{
			if (m[i] == ' ')
			{
				if (i == 0)
					continue;
				cout << " " << n << " ";
				continue;
			}
			cout << m[i];
		}
	}
	return(0);
}