#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		int cnt = 0;
		for (int i = 1; i <= n; i += 2)
		{
			cnt += i;
		}
		cout << cnt<<endl;
	}
}