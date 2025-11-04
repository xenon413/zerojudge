#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	while (cin >> a)
	{
		cout << "|";
		printf("%.4f", a);
		cout << "|=";
		if (a<0)
		{
			a = a * -1;
		}
		printf("%.4f", a);
		cout << endl;
	}
}