#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0,c=0;
	while (cin >> a)
	{
		b = a-3;
		if (b >= 12)
			c = b - 12;
		if (b < 12)
			c = b + 12;
		cout << c;
	}
	
}