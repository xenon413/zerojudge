#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int n = 0,num=0,k=0;
	vector<int> vec;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		switch (k)
		{
		case 1:
			cin >> num;
			vec.push_back(num);
			break;
		case 2:
			if (vec.size() == 0)
				cout << -1 << endl;
			else
				cout << vec[0] << endl;
			break;
		case 3:
			if (vec.size() == 0)
				break;
			vec.erase(vec.begin() + 0);
			break;
		default:
			break;
		}
	}
}