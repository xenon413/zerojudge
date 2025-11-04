#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int ans=0;
		ans += (n % 12)*5;
		ans += n / 12 * 50;
		cout << ans;
	}

}