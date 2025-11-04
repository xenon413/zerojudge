#include<iostream>
using namespace std;
int pow(int a)
{
	int c = 1;
	for (int i = 0; i < a; i++)
	{
		c *= 2;
	}
return(c);
}
int main()
{
	long long int a;
	long long int b = -1;
	while (cin >> a)
	{
		for (int i = 0; i < a+1; i++)
		{
			b++;
			cout << "2^" << b<<" = " << pow(b)<<endl;
		}
	}

}