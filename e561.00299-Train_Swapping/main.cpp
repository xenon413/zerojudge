#include<iostream>
#include<vector>
using namespace std;
void Sort(vector<int> num)
{
	int pro,cnt=0;
	for (int i = 0; i < num.size()-1; i++)
	{
		if (num[i] > num[i + 1])
		{
			pro = num[i];
			num[i] = num[i+1];
			num[i + 1] = pro;
			cnt++;
			if (i >= 1)
				i -= 2;
			else
				i--;
		}
	}
	
	cout << "Optimal train swapping takes " << cnt << " swaps.\n";
}
int main(void)
{
	int n, l,pro;
	vector<int>vec;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> l;
		for (int k = 0; k < l; k++)
		{
			cin >> pro;
			vec.push_back(pro);
		}
		Sort(vec);
		vec.clear();
	}
}