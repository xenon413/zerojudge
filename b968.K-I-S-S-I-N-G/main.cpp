#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string a, b;
	while (getline(cin, a) )
	{
		getline(cin, b);
		cout << a << " and " << b << " sitting in the tree"<<endl;
	}
	return(0);
}