#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
	if (a % 7 == 0 && b % 7 == 0)
	{
		if (a % 70 == b % 70)
			return false;
		else
			return a % 70 > b % 70;
	}
	else if (a % 7 == 0)
		return true;
	else if (b % 7 == 0)
		return false;
	else
	{
		if (a % 77 == b % 77)
			return true;
		else
			return a % 77 < b % 77;
	}
}
int main(void)
{
	int num;
	vector<int>data;
	while (cin >> num)
	{
		if (!num)
			break;
		data.push_back(num);
	}
	sort(data.begin(), data.end(), cmp);
	cout << data[0];
}