#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Alph
{
	char alph='a';
	int cnt = 0;
};
bool cmp(Alph a, Alph b)
{
	if (a.cnt == b.cnt)return a.alph<b.alph;
	return a.cnt > b.cnt;
}
int main(void)
{
	int num;
	string str;
	Alph alph[26];
	cin >> num;
	cin.ignore();
	
	for (int i = 0; i < num; i++)
	{
		getline(cin, str);
		for (int k = 0; k < str.size(); k++)
		{
			if (isalpha(str[k]))
			{
				//cout << tolower(str[k]) - 'a'<<'\n';
				alph[tolower(str[k]) - 'a'].alph = toupper(str[k]);
				alph[tolower(str[k]) - 'a'].cnt++;
				//cout << alph[tolower(str[k]) - 'a'].alph << ' ' << alph[tolower(str[k]) - 'a'].cnt << '\n';
			}
		}
	}
	sort(alph, alph + 26,cmp);
	for (Alph i : alph)
	{
		if (i.cnt == 0)
			break;
		cout << i.alph << ' ' << i.cnt << '\n';
	}
}