#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main(void)
{
	int n = 0;
	string num,type;
	vector<string> s;
	list<string> list;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		
		type.push_back(num[3]);
		type.push_back(num[4]);
		s.push_back(type);
		list.push_back(type);
		type.clear();
	}
	list.sort();
	list.unique();
	sort(s.begin(), s.end());
	int cnt = 0;
	for (string i:list)
	{
		if (i[0] == '0')
			cout << i[1] << " ";
		else
			cout << i << " ";
		for (int k = 0; k < s.size(); k++)
		{
			if (i == s[k])
			{
				cnt++;
			}
		}
		cout << cnt<<endl;
		cnt = 0;
	}
}