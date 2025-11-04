#include<iostream>
using namespace std;
int main(void)
{
	int n = 0;
	while (cin >> n)
	{
		if (n % 3 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return(0);
}