#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(void)
{
	stack<int>a, station;
	vector<int>b;
	int n,pro;
	cin >> n;
	for (int i = n; i >0; i--)
	{
		cin >> pro;
		b.push_back(pro);
		a.push(i);
	}
	int cnt=0;
	for (int i = 0; i < n; i++)
	{
		station.push(a.top());
		a.pop();
		try
		{
			while ((!station.empty()) && station.top() == b[cnt])
			{
				cnt++;
				station.pop();
			}
		}
		catch (const std::exception&)
		{
		}

	}
	if (station.empty())
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}