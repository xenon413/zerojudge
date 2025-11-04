#include<iostream>
using namespace std;
int main(void)
{
	float a = 0, b = 0;
	float c = 0;
	while (cin >> a >> b)
	{
		c = a*10000/b/b;
		printf("%.1f", c);
	}
}