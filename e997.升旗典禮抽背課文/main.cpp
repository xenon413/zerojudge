#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string n;
	int num=0,s=0,cnt=0,cnt1=0;
	while (getline(cin, n))
	{
		cin >> num;
		num -= 1;
		s = n.size();
		for (int i = 0; i < s; i++)
		{
			if (n[i] == ' ')
			{
				cnt++;
			}
		}
		for (int k = 0; k < s; k++)
		{
			if (n[k] == ' ')
			{
				cnt1++;
				continue;
			}
			if (cnt1 == cnt - num)
			{
				cout << n[k];
			}
			if (cnt1 > cnt - num)
				break;
		}
	}
}