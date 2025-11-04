#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	vector<int>n;
	int num;
	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		n.push_back(num);
	}
	sort(n.begin(), n.end());
	cout << n[0] << " " << n[1] << " " << n[2] << endl;
	if (n[0] + n[1] <= n[2])
		cout << "No";
	else if (n[0] * n[0] + n[1] * n[1] < n[2] * n[2])
		cout << "Obtuse";
	else if (n[0] * n[0] + n[1] * n[1] == n[2] * n[2])
		cout << "Right";
	else
		cout << "Acute";
}