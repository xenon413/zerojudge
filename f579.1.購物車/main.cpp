#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main(void)
{
	int a = 0, b = 0, n = 0,num=0,cnt=0;
	cin >> a >> b >> n;
	int A=0, B=0;
	for (int i = 0; i < n; i++)
	{
		do
		{
			cin >> num;
			if (num == a)
				A ++;
			if (num == b)
				B ++;
			if (num == -a)
				A --;
			if (num == -b)
				B --;
		}
		while (num != 0);
		if (A > 0 && B > 0)
			cnt++;
		A = 0, B = 0;
	}
	cout << cnt;
}