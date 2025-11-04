#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int totle = 0, num = 0,cnt=0;
	vector<int>vec;
	while (cin >> totle)
	{
		vec.clear();
		if (totle < 0)
			break;
		cnt++;
		cout << "Case " << cnt << ":\n";
		for (int i = 0; i < 12; i++)
		{
			cin >> num;
			vec.push_back(num);
		}
		for (int i = 0; i < 12; i++)
		{
			cin >> num;
			if (totle >= num)
			{
				totle -= num;
				cout << "No problem! :D\n";
			}
			else
				cout << "No problem. :(\n";
			totle += vec[i];
		}
	}

}