#include<iostream>
using namespace std;
int main(void)
{
	int a = 0, b = 0, c = 0;
	int a1 = 0, c1 = 0, plus = 0;
	while (cin >> a >> b >> c)
	{
		a1 = a / 10;
		c1 = c / 2;
		if (a1 >= c1)
		{
			b += c1;
		}
		if (a1 < c1)
		{
			b += a1;
		}
		cout << a << " 個餅乾，" << b << " 盒巧克力，" << c << " 個蛋糕。"<<endl;
	}
	return(0);
}