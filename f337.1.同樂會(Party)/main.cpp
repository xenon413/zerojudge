#include<iostream>
using namespace std;
int main(void)
{
	int n = 0, m = 0;
	while (cin >> n >> m)
	{
		if (m * 8 < n * 2)
		{
			cout << "Not enough" << endl;
		}
		else if (m * 8 > n * 3)
		{
			cout << "Too much" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}
	}
	return(0);
}