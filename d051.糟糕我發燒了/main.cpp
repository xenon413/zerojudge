#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	double n;
	while (cin >> n)
	{
		double m = 0;
		m = (n - 32) * 5 / 9;
		printf("%.3f", m);
	}
}