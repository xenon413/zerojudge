#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(void)
{
	stringstream pro;
	int a, b, n;
	while (cin >> a >> b >> n)
	{
		pro.str("");
		pro << a / b;
		pro << ".";
		while (n > 0)
		{
			if (a % b == 0)
			{
				for (int i = 0; i < n; i++)
					pro << "0";
				break;
			}
			a = a % b * 10;
			while (a < b)
			{
				pro << "0";
				a *= 10;
				n--;
				if (n <= 0)
					break;
			}
			if (n <= 0)
				break;
			pro << a / b;
			n--;
		}
		cout << pro.str() << '\n';
	}

}