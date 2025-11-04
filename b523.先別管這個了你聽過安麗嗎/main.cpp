#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void)
{
	string s;
	int cnt = 0,Size=0,check=0;
	vector<string>vec;
	while (getline(cin, s))
	{
		if (s == "EOF")
		{
			break;
		}
		vec.push_back(s);
		if (cnt == 0)
		{
			cnt++;
			cout << "NO"<<endl;
			continue;
		}
		for (int i = 0; i < cnt; i++)
		{
			if (vec[i]!= s)
			{
				continue;
			}
			else
			{
				check = 1;
				cout << "YES" << endl;
				break;
			}
		}
		if (check == 0)
		{
			cout << "NO" << endl;
		}
		cnt++;
		check = 0;
	}
	return(0);
}