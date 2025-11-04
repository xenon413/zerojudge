#include<iostream>
using namespace std;
int main(void)
{
	string n = "141592653589793";
	int m;
	while (cin >> m)
	{
		m -= 1;
		cout << n[m];
	}
	return(0);
}