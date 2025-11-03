#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string n;
	int s = 0,ans=0;
	while (getline(cin, n))
	{
		s = n.size();
		for (int i = 0; i < s; i++)
		{
			switch (n[i])
			{
			case '0':
				ans += 1;
				break;
			case '1':
				break;
			case '2':
				break;
			case '3':
				break;
			case '4':
				break;
			case '5':
				break;
			case '6':
				ans += 1;
				break;
			case '7':
				break;
			case '8':
				ans += 2;
				break;
			case '9':
				ans += 1;
				break;
			}
		}
		cout << ans << endl;
		ans = 0;
	}
}