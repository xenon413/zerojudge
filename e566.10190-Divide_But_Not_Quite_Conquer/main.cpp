#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	long long int n = 0, m = 0,cnt=0,num=0;
	vector<long long int>v;
	while (cin >> n >> m)
	{
		cnt = 0;
		v.clear();
		num = 0;
		if (m == 0)
		{
			cout << "Boring!" << endl;
			continue;
		}
		for (int i = n;i>1;)
		{
			if (i % m != 0)
			{
				cnt++;
				break;
			}
			v.push_back(i);
			i = i / m;
			num++;
		}
		if (cnt == 1)
		{
			cout << "Boring!" << endl;
			continue;
		}
		for (int k = 0; k < num; k++)
		{
			cout << v[k] << " ";
		}
		cout << 1<<endl;
	}
	return(0);
}