#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<string>ans;
	bool check = true;
	string n,str,re;
	cin >> n;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] == '+')
		{
			if (check == true)
			{
				ans.push_back(str);
				str.clear();
				
			}
			else
			{
				for (int k= str.size()-1; k >= 0; k--)
				{
					re.push_back(str[k]);
				}
				ans.push_back(re);
				str.clear();
				re.clear();
				
			}
			
			check = true;
			continue;
		}
		else if (n[i] == '-')
		{
			if (check == true)
			{
				ans.push_back(str);
				str.clear();
				
			}
			else
			{
				for (int k = str.size() - 1; k >= 0; k--)
				{
					re.push_back(str[k]);
				}
				ans.push_back(re);
				str.clear();
				re.clear();
				
			}
			check = false;
			continue;
		}
		str.push_back(n[i]);
	}

	if (check == true)
	{
		ans.push_back(str);
		str.clear();
	}
	else
	{
		for (int k = str.size() - 1; k >= 0; k--)
		{
			re.push_back(str[k]);
		}
		ans.push_back(re);
		str.clear();
		re.clear();
	}

	for (string i : ans)
	{
		cout << i;
	}
}