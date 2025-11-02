#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void count(vector<int> num)
{
	int cnt=0;
	for (int i = 0; i < num.size()-2; i++)
	{
		for (int k = i+1; k < num.size() - 1; k++)
		{
			for (int j = k+1; j < num.size(); j++)
			{
				if (num[i]*num[i]+num[k]*num[k]==num[j]*num[j])
				{
					cnt++;
				}
			}
		}
	}
	cout << cnt<<endl;
}
int main(void)
{
	vector<int> vec;
	int t = 0, n = 0, num = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int k = 0; k < n; k++)
		{
			cin >> num;
			vec.push_back(num);
		}
		if (n < 3)
		{
			cout << 0 << endl;
			continue;
		}
		sort(vec.begin(), vec.end());
		count(vec);
		vec.clear();
	}
}