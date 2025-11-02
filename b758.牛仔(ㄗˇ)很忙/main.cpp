#include<iostream>
using namespace std;
int main(void)
{
	int a = 0, b = 0;
	while (cin >> a >> b)
	{
		a += 2;
		b += 30;
		if (b >= 60)
		{
			b -= 60;
			a += 1;
		}
		if (a >= 24)
		{
			a -= 24;
		}
		if (b < 10&&a>=10)
		{
			cout << a << ":" << '0' << b;
			continue;
		}
		if (a < 10 && b >= 10)
		{
			cout <<'0'<< a << ":" << b;
			continue;
		}
		if (a < 10 && b < 10)
		{
			cout <<'0'<< a << ":" << '0' << b;
			continue;
		}
		cout << a << ":" << b;
	}
	return(0);
}