#include<iostream>
using namespace std;
int main(void)
{
	int n=0, m=0,cnt=0;
	cin >> n>> m;
	int i = 1;
	for (; cnt < m; i++)
	{
		cnt = n * i;
	}
	cout << i-1;
	return 0;
}