#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	long long int a = 0, b = 0, c = 0;
	while (cin >> a >> b >> c)
	{
		long long int num = 0;
		num = (a + b + c) * (a + c - b) * (b + c - a) * (a + b - c)/16;
		cout << num << endl;

	}
}