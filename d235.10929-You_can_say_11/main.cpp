#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(void)
{
	string n;
	int a=0, b=0;
	while (cin >> n)
	{
		a = 0;
		b = 0;
		if (n == "0")
			break;
		for (int i = 0; i < n.size(); i += 2)
		{
			a += n[i] - 48;
		}
		for (int i = 1; i < n.size(); i += 2)
		{
			b += n[i] - 48;
		}
		//cout << (a - b) % 11 << endl;
		if ((a - b) % 11 == 0)
		{
			cout << n << " is a multiple of 11.\n";
		}
		else
		{
			cout << n << " is not a multiple of 11.\n";
		}
	}

}