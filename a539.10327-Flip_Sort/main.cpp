#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n;
	while (cin >> n)
	{
		vector<int>vec;
		int pro;
		for (int i = 0; i < n; i++)
		{
			cin >> pro;
			vec.push_back(pro);
		}
		int cnt=0;
		int i = 0,num;
		while (i < vec.size()-1)
		{
			if (vec[i] > vec[i + 1])
			{
				num = vec[i];
				vec[i] = vec[i + 1];
				vec[i + 1] = num;
				cnt++;
				if (i != 0)
					i--;
			}
			else
				i++;
		}
		cout << "Minimum exchange operations : " << cnt<<endl;
	}

}