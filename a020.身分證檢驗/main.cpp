#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int cnt(char a)
{
	switch (a)
	{
	case'A':
		return(1);
	case'B':
		return(10);
	case'C':
		return(19);
	case'D':
		return(28);
	case'E':
		return(37);
	case'F':
		return(46);
	case'G':
		return(55);
	case'H':
		return(64);
	case'I':
		return(39);
	case'J':
		return(73);
	case'K':
		return(82);
	case'L':
		return(2);
	case'M':
		return(11);
	case'N':
		return(20);
	case'O':
		return(48);
	case'P':
		return(29);
	case'Q':
		return(38);
	case'R':
		return(47);
	case'S':
		return(56);
	case'T':
		return(65);
	case'U':
		return(74);
	case'V':
		return(83);
	case'W':
		return(21);
	case'X':
		return(3);
	case'Y':
		return(12);
	case'Z':
		return(30);
	}
}
int math(string a)
{
	int ans=0,cnt=9;
	int a2;
	char a1;
	for (int i = 1; i < 9; i++)
	{
		cnt--;
		a1 = a[i];
		a2 = a1;
		a2 -= 48;
		ans += a2*cnt;
	}
	a1 = a[9];
	a2 = a1;
	a2 -= 48;
	ans += a2;
	return(ans);
}
int main()
{
	int ans=0;
	string num;
	cin >> num;
	ans += cnt(num[0]);
	ans += math(num);
	if (ans % 10 == 0)
		cout << "real "<<endl;
	else
		cout << "fake"<<endl;
	return(0);
}