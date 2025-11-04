#include<iostream>
using namespace std;
int cnt = 0;
int main()
{
	int a=0, b=0, c=0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a)
		{
			cnt++;
		}
	}
	cout << cnt;
}