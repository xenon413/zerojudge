#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	int n=0, m=0, num=0;
	vector<int>deck,front,back;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (i + 1 <= n / 2)
			front.push_back(num);
		else
			back.push_back(num);
	}
	for (int i = 0; i < front.size(); i++)
	{
		deck.push_back(front[i]);
		deck.push_back(back[i]);
	}
	front.clear();
	back.clear();
	for (int i = 0; i < m - 1; i++)
	{
		for (int k = 0; k < n; k++)
		{
			if (k + 1 <= n / 2)
				front.push_back(deck[k]);
			else
				back.push_back(deck[k]);
		}
		deck.clear();
		for (int k = 0; k < n / 2; k++)
		{
			deck.push_back(front[k]);
			deck.push_back(back[k]);
		}
		front.clear();
		back.clear();
	}
	for (int i = 0; i < n; i++)
	{
		cout << deck[i] << " ";
	}
	return 0;
}