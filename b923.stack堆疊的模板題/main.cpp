#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<int>stack;
	int row,a,b;
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		cin >> a;
		switch (a)
		{
		case 1:
			stack.pop_back();
			break;
		case 2:
			cout << stack.back()<<"\n";
			break;
		case 3:
			cin >> b;
			stack.push_back(b);
			break;
		default:
			break;
		}
	}
}