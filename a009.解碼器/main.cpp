#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
	string a,b;
	int cnt=0,num=0;
	getline(cin, a);
	cnt = a.size();
	for (int i = 0; i < cnt; i++)
	{
		num = 0;
		num = a[i];
		num = num - 7;
		b = num;
		cout << b;
	}
	
}