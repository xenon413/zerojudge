#include<iostream>
#include<string>
#include<algorithm>
	using namespace std;
	int main() 
	{
		int a = 0, b = 0;
		while(cin >> a)
		{
			if (a % 2 == 0)
			{
				cout << a<<endl;
			}
			else
				cout << a - 1<<endl;
		}
	}