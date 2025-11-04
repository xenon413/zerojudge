#include<iostream>
using namespace std;
int min(int a, int b)
{
	int c = 0;
	c = a * 60+b;
	return(c);
}
int hourM(int a)
{
	return(a % 60);
}
int hourH(int a)
{
	return(a / 60);
}
int main()
{
	int a = 0, b = 0,c=0,d=0;
	int ans = 0;
	while (cin >> a >> b >> c >> d)
	{
		ans = min(c, d) - min(a, b);
		if (ans < 0)
			ans = ans + 1440;
		cout << hourH(ans) << " " << hourM(ans) << endl;
	}
}