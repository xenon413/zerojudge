#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
	using namespace std;
	int main() 
	{
		vector<int>d;
		int a = 0, b = 0,c=0;
		while (cin >> a)
		{
			for (int i = 0; i < a; i++)
			{
				cin >> b;
				d.push_back(b);
			}
			sort(d.begin(), d.end());
			for (int k = 0; k < a; k++)
			{
				cout << d[k] << " ";
			}
		}
		cout << endl;
	}