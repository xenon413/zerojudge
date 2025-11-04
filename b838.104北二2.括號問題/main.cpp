#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	int n,cnt=0;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		for (char i : str)
		{
			if (i == '(')cnt++;
			else cnt--;
			if (cnt < 0)
			{
				cout << 0<<'\n';
				goto flage;
			}
		}
		if (cnt == 0) cout << str.size() / 2<<'\n';
		else cout << 0 << '\n';
	flage:{}
		cnt = 0;
	}
}