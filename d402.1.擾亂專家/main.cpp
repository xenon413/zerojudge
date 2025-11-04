#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void)
{
	string n,m;
	int cnt = 0;
	long long int num[2]{};
	while (getline(cin, n))
	{
		for (int i = 0; i < n.size(); i++)
		{
			if (n[i] >= '0' && n[i] <= '9')
			{
				for (; i < n.size(); i++)
				{

					if (n[i] < '0' || n[i] > '9')
					{
						num[cnt] = atoi(m.c_str());
						m.clear();
						cnt++;
						break;
					}
					if (i == n.size() - 1)
					{
						m.push_back(n[i]);
						num[cnt] = atoi(m.c_str());
						m.clear();
						cnt++;
						break;
					}
					m.push_back(n[i]);
				}
			}

			if (cnt==2)
				break;
		}
		if (cnt == 2)
			break;
	}
	cout << num[0] << " " << num[1] << " " << (num[0] + num[1]);
}