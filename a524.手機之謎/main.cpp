#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	int num,cnt=0;
	while (cin >> num)
	{
		cnt = 0;
		int* ans;
		ans = new int[num];
		for (int i = num; i > 0; i--)
		{
			ans[cnt] = i;
			cnt++;
		}

		do
		{
			for (int i = 0; i < num; i++)
			{
				cout << ans[i];
			}
			cout << endl;
		} while (prev_permutation(ans, ans + num));
		delete ans;
	}
	
}