#include<iostream>
using namespace std;
int main(void)
{
	int n = 0,cnt=0;
	while (cin >> n)
	{
		for (int i = n; i>0; i--)
		{
			for (int k = 0; k < i-1; k++)
			{
				cout << "_";
			}
			for (int j = 0; j <= cnt; j++)
			{
				cout << "*";
				
			}
			cnt+=2;
			for (int k = 0; k < i - 1; k++)
			{
				cout << "_";
			}
			cout << endl;
		}
	}
}