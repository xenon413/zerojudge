#include<iostream>
#include<vector>
using namespace std;
int match(int a, int b)
{
	if (a > b)
		return(1);
	else
		return(0);
}
int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	int a1 = 0, b1 = 0, c1 = 0, d1 = 0;
	int ans = 0, ans1 = 0;
	int cnt = 0;
	for (int i = 0; i < 2; i++)
	{
		cin >> a >> b >> c >> d;
		cin >> a1 >> b1 >> c1 >> d1;
		ans = a + b + c + d;
		ans1 = a1 + b1 + c1 + d1;
		cout << ans << ":" << ans1<<endl;
		cnt += match(ans, ans1);
	}
	if (cnt == 2)
		cout << "Win"<<endl;
	if (cnt == 1)
		cout << "Tie"<<endl;
	if (cnt == 0)
		cout << "Lose"<<endl;
	return(0);
}