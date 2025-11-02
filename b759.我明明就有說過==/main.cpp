#include<iostream>
#include<list>
using namespace std;
int main(void)
{
	int s;
	char c;
	string x;
	cin >> x;
	s = x.size();
	for (int i = 0; i < s; i++)
	{
		for (int k = i; k < x.size(); k++)
		{
			cout << x[k];
		}
		cout << endl;
		c = x[i];
		x.push_back(c);
	}
}