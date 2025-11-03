#include<iostream>
using namespace std;
int sky(int b)
{
	int a = 0;
	a = abs(b % 10);
	if (b < 0&&a!=0)
		a = 10-a;
	switch (a)
	{
	case 0:
		cout<<"丙";
		break;
	case 1:
		cout <<"丁";
		break;
	case 2:
		cout <<"戊";
		break;
	case 3:
		cout <<"己";
		break;
	case 4:
		cout <<"庚";
		break;
	case 5:
		cout <<"辛";
		break;
	case 6:
		cout <<"壬";
		break; 
	case 7:
		cout <<"癸";
		break;
	case 8:
		cout <<"甲";
		break;
	case 9:
		cout <<"乙";
		break;
	}
	return(a);
}
int land(int b)
{
	int a = 0;
	a = abs(b % 12);
	if (b < 0&&a!=0)
		a = 12-a;
	switch (a)
	{
	case 0:
		cout << "午";
		break;
	case 1:
		cout << "未";
		break;
	case 2:
		cout << "申";
		break;
	case 3:
		cout << "酉";
		break;
	case 4:
		cout << "戌";
		break;
	case 5:
		cout << "亥";
		break;
	case 6:
		cout << "子";
		break;
	case 7:
		cout << "丑";
		break;
	case 8:
		cout << "寅";
		break;
	case 9:
		cout << "卯";
		break;
	case 10:
		cout << "辰";
		break;
	case 11:
		cout << "巳";
		break;
	}
	return(0);
}
int main(void)
{
	int n = 0;
	while (cin >> n)
	{
		n = n - 1906;
		sky(n);
		land(n);
		cout << endl;
	}
	return(0);
}