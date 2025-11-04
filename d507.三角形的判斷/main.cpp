#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n;
	vector<int>num;
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		num.push_back(n);
	}
	sort(num.begin(), num.end());
	if (num[0] + num[1] < num[2])
	{
		cout << num[0] << " " << num[1] << " " << num[2] << endl << "No" << endl;
	}
	else
	{
		if (pow(num[0], 2) + pow(num[1], 2) == pow(num[2], 2))
			cout << "right triangle" << endl;
		if (pow(num[0], 2) + pow(num[1], 2) > pow(num[2], 2))
			cout  << "acute triangle" << endl;
		if (pow(num[0], 2) + pow(num[1], 2) < pow(num[2], 2))
			cout  << "obtuse triangle" << endl;
	}

}