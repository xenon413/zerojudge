#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n = 0;
	int cnt = 0;
	while (cin >> n)
	{
		for (int i = n; i > 1; i--)
		{
			cnt = 0;
			for (int k = 1; k <i; k++)
			{
				cout << "_";
				cnt++;
			}
			for (int k = 0; k < n - cnt; k++)
			{
				cout << "*";
			}
			cout << endl;
			
		}
		for (int j = 0; j < n; j++)
			cout << "*";
			cout << endl;
	}
	return(0);
}