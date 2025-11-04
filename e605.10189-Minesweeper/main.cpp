#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=0, m=0,cnt=0;
	vector<string>vec;
	string pro;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
			break;
		cnt++;
		cout << "Field #" << cnt << ":\n";
		for (int i = 0; i < n; i++)
		{
			cin >> pro;
			for (int k = 0; k < pro.size(); k++)
			{
				if (pro[k] == '.')
					pro[k] = '0';
			}
			vec.push_back(pro);
		}
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < m; k++)
			{
				if (vec[i][k] == '*')
				{
					bool up=0, down=0, left=0, right=0;
					if (i - 1 >= 0)//up
					{
						up = 1;
						if (vec[i - 1][k] != '*')
						{
							vec[i - 1][k] += 1;
						}
					}
	
					if (i + 1 < n)//down
					{
						down = 1;
						if (vec[i + 1][k] != '*')
						{
							vec[i + 1][k] += 1;
						}
					}
	
					if (k - 1 >= 0)//left
					{
						left = 1;
						if (vec[i][k - 1] != '*')
						{
							vec[i][k - 1] += 1;
						}
					}

					if (k + 1 <= m)//right
					{
						right = 1;
						if (vec[i][k + 1] != '*')
						{
							vec[i][k + 1] += 1;
						}
					}

					if (up==1 && left == 1)//左上
						if (vec[i - 1][k-1] != '*')
							vec[i - 1][k-1] += 1;
					if (up ==1&& right == 1)//右上
						if (vec[i - 1][k +1] != '*')
							vec[i - 1][k +1] += 1;
					if (down ==1&& right == 1)//右下
						if (vec[i + 1][k + 1] != '*')
							vec[i + 1][k + 1] += 1;
					if (down ==1&& left == 1)//右下
						if (vec[i + 1][k - 1] != '*')
							vec[i + 1][k - 1] += 1;
				}
			}
		}
		for (string i : vec)
		{
			cout << i << endl;
		}
		cout << endl;
		vec.clear();
	}
	
}