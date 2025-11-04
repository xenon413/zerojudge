#include<iostream>
using namespace std;
int main(void)
{
	int n=0;
	while (cin >> n)
	{
		if (n % 2 == 0)
			cout << "Even" << endl;
		else
			cout << "Odd" << endl;
	}
	return(0);
}