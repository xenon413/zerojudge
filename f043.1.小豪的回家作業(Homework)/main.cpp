#include<iostream>
using namespace std;
int main(void)
{
	long long int m = 0, n = 0,s=0;
	while (cin >> n >> m)
	{
		s = n - m;
		if (s == 0)
		{
			s = 3;
			m = n - s;
		}
		if (m >= s)
			cout << s << "+" << m;
		if (s > m)
			cout << m << "+" << s;
		cout << "=" << n << endl;
	}
	return(0);
}