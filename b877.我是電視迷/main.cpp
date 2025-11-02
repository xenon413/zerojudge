
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int a = 0, b = 0,c=0;
	while (cin >> a >> b)
	{
		c = b - a;
		if (c < 0)
			c += 100;
		cout << c;
	}
	
	return(0);
}