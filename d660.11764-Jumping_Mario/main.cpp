#include<iostream>

using namespace std;

int main(void)
{
	int n = 0, m = 0, a = 0, b = 0, high = 0, low = 0;
	cin >> n;
	for(int k=0;k<n;k++)
	{
		a = b = high = low = 0;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> a;
			if (i == 0)
				b = a;
			else//i!=0
			{
				
				if (b == a)
				{
					b = a;
					continue;
				}
				else if (b > a)
					low++;
				else if (a > b)
					high++;
				b = a;
			}
		}
		cout << "Case " << k+1 << ": " << high << " " << low << endl;
	}
	return 0;
}