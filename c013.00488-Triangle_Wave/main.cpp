#include<iostream>
using namespace std;
int main(void)
{
	int n = 0;
	int a = 0, b = 0;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			for (int g = 0; g < b; g++)
			{
				for (int k = 1;; k++)
				{
					for (int j = 0; j < k; j++)
					{
						cout << k;
					}
					cout << endl;
					if (k == a)
					{
						for (int j = k-1; j > 0; j--)
						{
							for (int m = 0; m < j; m++)
							{
								cout << j;
							}
							cout << endl;
						}
						break;
					}
				}
				cout << endl;
			}
			
		}
	}
}