#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,num;
	vector<int>vec;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			vec.push_back(num);
		}
		sort(vec.begin(),vec.end());
		for (int i = 0; i < n; i++)
		{
			cout << vec[i]<<" ";
		}
		vec.clear();
		cout << endl;
	}
	return 0;
}