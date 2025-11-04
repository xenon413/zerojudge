#include<iostream>
using namespace std;
int main(void)
{
	int pluse1 = 0, pluse2 = 0, min = 0;
	cin >> pluse1 >> pluse2 >> min;
	int num[5],money[5];
	int a = 0,ans=0,cnt=0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		num[i] = a;
	}
	for (int k = 0; k < 5; k++)
	{
		cin >> a;
		money[k] = a;
	}
	for (int j = 0; j < 5; j++)
	{
		if (num[j] == pluse1)
			ans += money[j];
		if (num[j] == pluse2)
			ans += money[j];
		if (num[j] == min)
		{
			ans -= money[j];
			cnt++;
		}
	}
	if (ans < 0)
		cout << 0;
	else if (cnt == 0)
		cout << ans*2;
	else
		cout << ans;
	return(0);
}