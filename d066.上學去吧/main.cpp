#include<iostream>
using namespace std;
int main(void)
{
	int h = 0, m = 0;
	while (cin >> h >> m)
	{
		if (h < 7 || h>=17)
		{
			cout << "Off School" << endl;
		}
		else if (h == 7)
		{
			if (m < 30)
			{
				cout << "Off School" << endl;
			}
			else
			{
				cout << "At School" << endl;
			}
		}
		else
		{
			cout << "At School" << endl;
		}
	}
	return(0);
}