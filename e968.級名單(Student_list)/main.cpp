#include <iostream>
using namespace std;
int main()
{
	int n = 0, a = 0, b = 0, c = 0;
	while (cin >> n >> a >> b >> c)
	{
		for (int i = n; i>0; i--)
		{
			if (i == a || i == b || i == c)
			{
				continue;
			}
			cout << "No. " << i<<endl;
		}
	}
}