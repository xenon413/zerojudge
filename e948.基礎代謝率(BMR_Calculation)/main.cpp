#include<iostream>
using namespace std;
float o(int a, int b, int c)
{
	float ans = 0;
	ans = 13.7 * c + 5 * b - a * 6.8 + 66;
	return(ans);
}
float g(int a, int b, int c)
{
	float ans = 0;
	ans = 9.6 * c + 1.8 * b - 4.7 * a + 655;
	return(ans);
}
int main(void)
{
	int n = 0,m=0;
	int a = 0, b = 0, c = 0;
	float ans = 0;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> m>>a>>b>>c;
			if (m == 1)
			{
				ans = o(a, b, c);
			}
			if (m == 0)
			{
				ans = g(a, b, c);
			}
			printf("%.2f", ans);
			cout << endl;
		}
	}
	return(0);
}