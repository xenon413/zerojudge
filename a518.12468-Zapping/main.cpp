#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int a = 0, b = 0,c=0;
	while (cin >> a >> b)
	{
		if (a == -1)
		{
			break;
		}
		c = abs(b - a);
		if (c >= 50)
		{
			c = 100-c;
		}
		cout << c<<endl;
	}
	
	return(0);
}