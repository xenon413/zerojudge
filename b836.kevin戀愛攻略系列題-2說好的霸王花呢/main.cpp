#include<iostream>
using namespace std;
int main()
{
	long long int n=0,m=0;

	while (cin >> n>>m)
	{

		if (m==0||(n-1)%m==0)
			cout << "Go Kevin!!"<<endl;
		else
			cout<<"No Stop!!"<<endl;
	}
}