#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
int main(void)
{
	int n = 0, m = 0,num=0;
	string s, arr;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			arr.append(s);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> num;
			cout << arr[num - 1];
		}
		cout << endl;
		arr.clear();
	}
}