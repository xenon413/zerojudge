#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct Position
{
	int max=1;
	int val=25;
};
class Solution
{
public:
	int slash(int x,int y)
	{
		int ifbreak=false;
		int cnt = 0;
		if (x == y)
		{
			for (int i = 0; i < 5; i++)
			{
				if (i != x)
				{
					if (check[i][i] == 0)
					{
						ifbreak = true;
						break;
					}
				}
			}
			if (ifbreak == false)
				cnt++;
		}
		ifbreak = false;
		if (x+y==4)
		{
			for (int i = 0; i < 5; i++)
			{
				if (i != y)
				{
					if (check[4 - i][i] == 0)
					{
						ifbreak = true;
						break;
					}
				}
			}
			if (ifbreak == false)
				cnt++;
		}
		return cnt;
	}
	int row_column(int x,int y)
	{
		int cnt = 0;
		bool ifbreak=false;
		for (int i = 0; i < 5; i++)
		{
			if(i!=x)
				if (check[i][y] == 0)
				{
					ifbreak = true;
					break;
				}
		}
		if (ifbreak == false)
			cnt++;
		ifbreak = false;
		for (int i = 0; i < 5; i++)
		{
			if (i != y)
				if (check[x][i] == 0)
				{
					ifbreak = true;
					break;
				}
		}
		if (ifbreak == false)
			cnt++;
		return cnt;
	}
	Solution()
	{
		Position max_position;
		int num;
		int cnt;
		//input map and check
		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; k < 5; k++)
			{
				cin >> num;
				map[i][k] = num;
			}
		}
		//input num(n)
		while (true)
		{
			cin >> num;
			if (num == -1)
				break;
			for (int i = 0; i < 5; i++)
			{
				for (int k = 0; k < 5; k++)
				{
					if (num == map[i][k])
					{
						check[i][k] = 1;
						goto flage;
					}
				}
			}
		flage: {}
		}
		//iterate all 0
		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; k < 5; k++)
			{
				if (check[i][k] == 0)
				{
					cnt = 0;
					cnt += row_column(i,k);
					cnt += slash(i, k);
					//cout << cnt << ' ';
					if (cnt > max_position.max)
					{
						max_position.max = cnt;
						max_position.val = map[i][k];
					}
					else if (cnt == max_position.max && max_position.val > map[i][k])
					{
						max_position.max = cnt;
						max_position.val = map[i][k];
					}
					
				}
			}
		}
		cout << max_position.val;
	}

private:
	int map[5][5]= {};
	int check[5][5] = {};
};
int main(void)
{
	Solution solution;
}