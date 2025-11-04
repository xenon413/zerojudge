#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	while (cin >> a)
	{
		if (a > 0)
			cout << 1 << endl;
		if (a == 0)
			cout << 0 << endl;
		if (a < 0)
			cout << -1 << endl;
	}
}