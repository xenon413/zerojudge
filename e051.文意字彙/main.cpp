#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while (cin >> a)
	{
		int b = 0;
		b = a.size();
		cout << a[0];
		for (int i = 0; i < b - 2; i++)
		{
			cout << "_";
		}
		cout << a[b - 1] << endl;
	}
}