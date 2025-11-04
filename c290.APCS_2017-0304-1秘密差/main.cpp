#include<iostream>
using namespace std;
int main(void)
{
	string sNum;
	int a=0, b=0,ans;
	cin >> sNum;
	for (int i = 0; i < sNum.size(); i+=2)
	{
		a += sNum[i]-48;
	}
	for (int i = 1; i < sNum.size(); i += 2)
	{
		b += sNum[i] - 48;
	}
	ans = a - b;
	if (ans < 0)
		ans *= -1;
	cout << ans;
}