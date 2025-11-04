#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
struct Data
{
	string name;
	float weght;
};
bool cmp(Data a, Data b) {
	if (a.weght != b.weght)
		return a.weght > b.weght;
	return 0;
}
int main()
{
	Data* data;
	int n;
	float p, l, w, r;
	cin >> n;
	data = new Data[n];
	for (int i = 0; i < n; i++)
	{
		cin >> data[i].name >> p >> l >> w >> r;
		data[i].weght = p * w / l * r;
	}
	sort(data, data + n , cmp);
	for (int i = 0; i < n; i++)
		cout << data[i].name<<"\n";
	return 0;
}