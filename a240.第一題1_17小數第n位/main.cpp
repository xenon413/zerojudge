#include<iostream>
#include<vector>
#include<algorithm>
#include<vector>
using namespace std;
int count(int d) 
{

	int a=1, b=17;
	int add = 0;
	int ans = 0;
	//cout << a / b << '.';
	a = a % b * 10;
	while (d--) 
	{
		add+= a / b;
		ans = a / b;
		a = a % b * 10;
	}
	cout << ans << ' ' << add<<'\n';
	return 0;
}
int main(void)
{
	int num,n;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> num;
		count(num);
	}

}