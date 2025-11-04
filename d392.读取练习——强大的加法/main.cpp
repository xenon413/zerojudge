#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;
int pow(int a)
{
	int ans=1;
	for (int i = 0; i < a; i++)
	{
		ans *= 10;
	}
	return(ans);
}
int chang(char a)
{
	int b = 0;
	b = a;
	b -= 48;
	return(b);
}
int main(void)
{
	string num;
	int s = 0,n=0,ans=0,cnt=0,pp=0;
	while(getline(cin,num))
	{
		s = num.size();
		cnt = 0;
		ans = 0;
		pp = 0;
		for (int i = 0; i < s; i++)
		{
			cnt++;
			n = chang(num[i]);
			if (num[i] == ' ')
			{
				pp += ans;
				ans = 0;
				cnt = 0;
				continue;
			}
			if (cnt > 1)
			{
				ans*=10;
			}
			ans += n;
		}
		
		cout << pp+ans << endl;
	}
	
	return(0);
}