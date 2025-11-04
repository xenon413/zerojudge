#include<iostream>
using namespace std;
int main(void)
{
	int a = 0, b = 0;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
		{
			cout << "Ok!"<<endl;
			continue;
		}
		if (b == 0)
		{
			cout<< "Impossib1e!" << endl;
			continue;
		}
		if (a % b == 0)
		{
			cout << "Ok!"<<endl;
		}
		else
		{
			cout << "Impossib1e!"<<endl;
		}
	}
	return(0);
}