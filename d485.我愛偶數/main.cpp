#include<iostream>
using namespace std;
int main()
{
	int a;
	int b = 0;
	while (cin >> a>>b)
	{
		int c;
		c=(b - a) / 2 + 1;
		if (a == b&&a%2!=0)
		{
			c = 0;
		}
			
		cout << c<<endl;
	}

}