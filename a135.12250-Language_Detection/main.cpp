#include<iostream>
using namespace std;
int main()
{
	string a;
	int cnt = 0;
	while (cin >> a)
	{
		cnt++;
		if (a == "HELLO")
		{
			cout << "Case " << cnt << ": ENGLISH"<<endl;
		}
		else if (a == "HOLA")
		{
			cout << "Case " << cnt << ": SPANISH"<<endl;
		}
		else if (a == "HALLO")
		{
			cout << "Case " << cnt << ": GERMAN"<<endl;
		}
		else if (a == "BONJOUR")
		{
			cout << "Case " << cnt << ": FRENCH"<<endl;
		}
		else if (a == "CIAO")
		{
			cout << "Case " << cnt << ": ITALIAN"<<endl;
		}
		else if (a == "ZDRAVSTVUJTE")
		{
			cout << "Case " << cnt << ": RUSSIAN"<<endl;
		}
		else if (a == "#")
		{
			break;
		}
		else
			cout << "Case " << cnt << ": UNKNOWN" << endl;
		
		
	}
	
}