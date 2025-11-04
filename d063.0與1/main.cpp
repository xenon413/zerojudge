#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int ans;
		ans=n - 1;
		ans *= ans;
		cout << ans<<endl;
	}
}