#include<iostream>
using namespace std;
int main(void)
{
	int a = 0, b = 0, c = 0;
	while (cin >> a >> b >> c)
	{
		if (a * c >= b)
			cout << a << " " << b << " " << c << ". I will make it!"<<endl;
		else
			cout << a << " " << b << " " << c << ". I will be late!"<<endl;
	}
	return(0);
}