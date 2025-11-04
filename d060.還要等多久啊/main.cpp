#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)
	{
		if (n == 25)
			cout << 0 << endl;
		if (n < 25)
			cout << 25 - n << endl;
		if (n > 25)
			cout << 60 - n + 25 << endl;
	}
}