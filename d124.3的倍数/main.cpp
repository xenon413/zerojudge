#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	string num;
	int s = 0,ans=0;
	while (cin >> num)
	{
		s=num.size();
		for (int i = 0; i < s; i++)
		{
			if (num[i] == '-')
			{
				i++;
			}
			ans+=num[i]-48;
		}
		if (ans % 3 == 0)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
		ans = 0;
	}
	return(0);
}