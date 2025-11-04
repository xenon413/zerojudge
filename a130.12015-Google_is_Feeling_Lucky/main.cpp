#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
struct Data
{
	int num;
	string name;
};
bool cmp(Data a, Data b) {
	if (a.num != b.num) 
		return a.num > b.num;
	return 0;
}
int main()
{
	Data pro;
	vector<Data>data;
	data.reserve(10);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		data.clear();
		for (int k = 0; k < 10; k++)
		{
			cin >> pro.name;
			cin >> pro.num;
			data.push_back(pro);
		}
		sort(data.begin(), data.end(), cmp);
		cout << "Case #" << i << ":\n";
		for (Data k : data)
		{
			if (k.num != data[0].num)
				break;
			cout << k.name << "\n";
		}
	}
	return 0;
}