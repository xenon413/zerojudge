#include<iostream>
using namespace std;
int main()
{
	int n = 0,n1=0;
	while(cin >> n)
	{
		char a;
		cin >> a>>n1;
		switch (a)
		{
			case'+':
				cout << n + n1<<endl;
				break;
			case'-':
				cout << n - n1<<endl;
				break;
			case'*':
				cout << n * n1<<endl;
				break;
			case'/':
				cout << n / n1<<endl;
				break;
		}
			
	}
}