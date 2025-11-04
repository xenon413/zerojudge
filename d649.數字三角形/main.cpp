#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int cnt = 0;
	while (cin >> n)
	{
		for (int i = n; i >0; i--)
		{
			cnt = 0;
			for (int k = 1; k < i; k++)
			{
				cnt++;
				cout << "_";
			}
			for (int j = 0; j < n - cnt; j++)
				cout << "+";
			cout << endl;
		}
	}
}