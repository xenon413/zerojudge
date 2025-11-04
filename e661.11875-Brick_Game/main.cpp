#include<iostream>
using namespace std;
int main(void)
{
	int n = 0, m = 0, num = 0;
	while (cin >> n)
	{
		for (int k = 0; k<n; k++)
		{
			cin >> m;
			for (int i = 0; i < m; i++)
			{
				cin >> num;
				if (i == (m + 1) / 2 - 1)
				{
					cout <<"Case "<<k+1<<": "<< num<<endl;
					continue;
				}
			}
		}
		
	}
	return(0);
}