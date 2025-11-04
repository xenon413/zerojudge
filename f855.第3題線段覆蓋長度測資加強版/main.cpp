#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct line
{
	int front;
	int back;
};
bool cmp(line a, line b)
{
	return a.front <= b.front;
}
int main()
{
	int n = 0,a=0,b=0;
	cin >> n;
	vector<line>vec;
	line pro;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		pro.front = a;
		pro.back = b;
		vec.push_back(pro);
	}
	sort(vec.begin(), vec.end(), cmp);
	for (int i = 0; i < vec.size()-1; i++)
	{
		if (vec[i].front <= vec[i + 1].front && vec[i].back >= vec[i + 1].back)//a - a1 - b1 - b
		{
			vec.erase(vec.begin() + i + 1);
			i--;
			continue;
		}
		if (vec[i].front >= vec[i + 1].front && vec[i].back <= vec[i + 1].back)//a1 - a - b - b1
		{
			vec.erase(vec.begin() + i);
			if (i > 0)
				i -= 2;
			else
				i--;
			continue;
		}
		if (vec[i].front < vec[i + 1].front && vec[i].back >= vec[i + 1].front)//a - a1 - b - b1
		{
			vec[i].back = vec[i + 1].back;
			vec.erase(vec.begin() + i + 1);
			i--;
			continue;
		}
		if (vec[i].front <= vec[i + 1].back && vec[i].back > vec[i + 1].back)//a1 - a - b1 - b
		{
			vec[i].front = vec[i + 1].front;
			vec.erase(vec.begin() + i + 1);
			i--;
			continue;
		}
	}
	int ans = 0;
	for (line i : vec)
	{
		ans += i.back - i.front;
	}
	cout << ans;
}