#include<iostream>
using namespace std;

int main(void)
{
	int a = 0;
	string ans;
	cin >> a;
	cin >> ans;
	int num = 0;
	string in;
	cin >> num;
	int cnt = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> in;
		for (int k = 0; k < a; k++)
		{
			if (ans[k] == in[k])
				cnt++;
		}
		cout << (float)cnt * 100 / (float)a<<endl;
		cnt = 0;
	}
}