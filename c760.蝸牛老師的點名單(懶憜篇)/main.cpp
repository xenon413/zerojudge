#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	char ans;
	string name;
	int s = 0;
	while (getline(cin, name))
	{
		s = name.size();
		for (int i = 0; i < s; i++)
		{
			if (name[i] == ' ')
			{
				cout << endl;
				i++;
				ans=name[i]-32;
				cout << ans;
				continue;
			}
			if (i == 0)
			{
				ans=name[i] - 32;
				cout << ans;
				continue;
			}
			cout << name[i];
		}
	}
	return(0);
}