#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int compare(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool cmp(int a, int b)
{
	return a > b;
}
int main() 
{
	int k = 0,cnt=0,pro=0;
	vector<int> num, ans;
	string s;
	cin >> k >> s;
	if (s.size() == 1&&k==1)
	{
		cout << 1;
		goto check;
	}
	for (int i = 0; i < s.size()-1; i++)//s size 1-1=0
	{
		if (compare(s[i]) == compare(s[i+1]))
		{
			cnt++;
		}
		else
		{
			num.push_back(cnt+1);
			cnt = 0;
		}
	}
	num.push_back(cnt);
	for (int i = 0; i < num.size(); i++)
	{
		//cout << num[i] << endl;
		if (num[i] < k)//aBBdaaa
		{
			ans.push_back(pro);
			pro = 0;
		}
		if (num[i] == k)
		{
			pro += k;
		}
		if (num[i] > k)
		{
			pro += k;
			ans.push_back(pro);
			pro = k;
		}
	}
	ans.push_back(pro);
	sort(ans.begin(), ans.end(),cmp);
	cout << ans[0];
check: {}
}