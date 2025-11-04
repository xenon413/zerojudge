#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	string w;
	while (cin >> w)
	{
		sort(w.begin(), w.end());
		cout << w << endl;
	}
}