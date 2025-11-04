#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
int main(void)
{
	int n = 0,fr=0,ba=0,ans=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> fr >> ba;
		if (fr % 2 == 0)
			fr++;
		for (int k = fr; k <= ba; k+=2)
		{
			ans += k;
		}
		cout << "Case " << i + 1 << ": " << ans << endl;
		ans = 0;
	}

}