#include<iostream>
using namespace std;
int main(void)
{
	int n = 0, m = 0,cnt=0;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			if (m <= 10)
				cnt++;
		}
		cout << cnt << endl;
	}
	return(0);
}