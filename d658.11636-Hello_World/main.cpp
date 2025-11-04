#include<iostream>
using namespace std;
int main(void)
{
	int n = 0, cnt = 0,cnt1=0;
	while (cin >> n)
	{
		if (n<0)
		{
			break;
		}
		for (int i = 1; i < n;)
		{
			i *= 2;
			cnt++;
		}
		cnt1++;
		cout << "Case " << cnt1 << ": ";
		cout << cnt << endl;
		cnt = 0;
	}
	return(0);
}