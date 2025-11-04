#include<iostream>

using namespace std;
int main(void)
{
	string c;
	int s = 0;
	int n = 0;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> c;
			s=c.size();
			if (s == 5)
			{
				cout << 3 << endl;
				continue;
			}
			if (c[0] == 'o' && c[1] == 'n')
			{
				cout << 1 << endl;
				continue;
			}
			if (c[0] == 'o' &&  c[2] == 'e')
			{
				cout << 1 << endl;
				continue;
			}
			if ( c[1] == 'n' && c[2] == 'e')
			{
				cout << 1 << endl;
				continue;
			}
			if ( c[1] == 'w' && c[2] == 'o')
			{
				cout << 2 << endl;
				continue;
			}
			if (c[0] == 't' && c[1] == 'w' )
			{
				cout << 2 << endl;
				continue;
			}
			if (c[0] == 't'  && c[2] == 'o')
			{
				cout << 2 << endl;
				continue;
			}
		}
		
	}
	return(0);
}