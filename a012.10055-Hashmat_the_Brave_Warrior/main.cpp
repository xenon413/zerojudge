#include<iostream>
#include<string>
#include<algorithm>
	using namespace std;
	int main() 
	{
		long long int a = 0,b=0;
		while (cin >> a >> b)
		{
			if (a > b)
				cout << a - b<<endl;
			else
				cout << b - a<<endl;
		}
			
	}