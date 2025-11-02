#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void)
{
	vector<string>ans;
	string name, hello,pro="";
	getline(cin, name);
	getline(cin, hello);
	for (char i : name)
	{
		if (i == ' ')
		{
			ans.push_back(pro);
			pro = "";//pro.clear()
			continue;
		}
		pro += i;
	}
	ans.push_back(pro);
	for (string i : ans)
	{
		cout << hello << ", " << i<<endl;
	}
}