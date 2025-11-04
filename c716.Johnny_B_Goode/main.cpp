#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string a;
	int cnt = 0;
	vector<string>m;
	while (cin >> a)
	{
		m.push_back(a);
		cnt++;
	}
	cout << "Go, ";
	for (int i = 0; i < cnt; i++)
	{
		cout << m[i];
		if(i!=cnt-1)
		cout << " ";
	}
	cout<< ", go go";
}