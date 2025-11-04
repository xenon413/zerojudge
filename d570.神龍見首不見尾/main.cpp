#include <iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	int a=0;
	while (cin >> a)
	{
		for (int i = a; i > 0; i /= 10)
		{
			cout << i << endl;
		}
	}
	return(0);
}