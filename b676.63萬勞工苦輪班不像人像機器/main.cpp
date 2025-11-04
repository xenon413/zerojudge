#include<iostream>
using namespace std;
int main(void)
{
	int num = 0;
	while (cin >> num)
	{
		switch (num % 5)
		{
		case 0:
			cout << "U" << endl;
			break;
		case 1:
			cout << "G" << endl;
			break;
		case 2:
			cout << "Y" << endl;
			break;
		case 3:
			cout << "T" << endl;
			break;
		case 4:
			cout << "I" << endl;
			break;
		}
	}
	return(0);
}