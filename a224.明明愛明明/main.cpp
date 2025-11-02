#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main(void)
{
	string str,str2;
	list<int> num;
	list<char> cList;
	int cnt=0;
	while (cin >> str)
	{
		for (int i=0;i<str.size();i++)
		{
			str[i] = tolower(str[i]);
			if(str[i]>=97&&str[i]<=122)	
				str2.push_back(str[i]);
		}
		sort(str2.begin(), str2.end());
		for (char i : str2)
		{
			cList.push_back(i);
		}
		cList.unique();
		for (char i : cList)
		{
			for (char k : str2)
			{
				if (k == i)
				{
					cnt++;
				}
			}
			num.push_back(cnt);
			cnt = 0;
		}

		if (str2.size() % 2 == 0)
		{
			for (int i : num)
			{
				if (i % 2 != 0)
				{
					cout << "no...\n";
					goto flage1;
				}
			}
			cout << "yes !\n";
		}
		else
		{
			for (int i : num)
			{
				if (i % 2 != 0)
				{
					cnt++;
					if (cnt > 1)
					{
						cout << "no...\n";
						goto flage1;
					}
				}
			}
			cout << "yes !\n";
		}
		cnt = 0;

	flage1: {}
		str.clear();
		str2.clear();
		num.clear();
		cList.clear();
		cnt = 0;
	}
}