#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	long long int n = 0, m = 0;
	cin >> n >> m;
	if(n==0||m==0)
		cout << "OK!";
	else if (n % m != 0)
		cout << n % m;
	else
		cout << "OK!";
	return 0;
}