#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void)
{
	string n;
	int s = 0;
	while (getline(cin, n))
	{
		s = n.size();
		for (int i = 0; i < s; i++)
		{
			if (n[i] == ' ')
			{
				cout << endl;
				continue;
			}
			cout << n[i];
			
		}
	}
	return(0);
}