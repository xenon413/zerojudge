#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
struct Mynum
{
	int num=-1;
	int time=0;
};
bool cmp(Mynum a, Mynum b)
{
	if (a.time != b.time)
		return a.time > b.time;

	return a.num < b.num;
}
int main(void)
{
	int n;
	while (cin >> n)
	{
		list<int> my_list;
		vector<Mynum>vec;
		Mynum in;
		int pro;
		for (int i = 0; i < n; i++)
		{
			cin >> pro;
			my_list.push_back(pro);
		}
		my_list.sort();
		for (int i : my_list)
		{
			if (in.num == -1)
			{
				in.num = i;
				in.time++;
			}
			else if (in.num == i)
			{
				in.time++;
			}
			else
			{
				vec.push_back(in);
				in.num = i;
				in.time = 1;
			}
		}
		vec.push_back(in);
		sort(vec.begin(), vec.end(), cmp);
		for (Mynum i : vec)
		{
			cout << i.num << " ";
		}
		cout << endl;
	}
}