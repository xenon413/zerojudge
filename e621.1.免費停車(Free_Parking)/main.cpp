#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, n = 0,cnt=0;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b >> c;
			if (a + 1 == b)
			{
				cout << "No free parking spaces." << endl;
			}
			if (c == 1)
			{
				cout << "No free parking spaces." << endl;
			}
			for (int k = a+1; k < b;k++)
			{
				if (k % c == 0)
				{
					cnt++;
					continue;
				}
					
				cout << k << " ";
			}
			if (cnt == b - a)
			{
				cout << "No free parking spaces." << endl;
			}
			cnt = 0;
			cout << endl;
		}
	}

}