#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n = 0, x = 0, y = 0,yee=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (x + y < 0)
			yee = 100 + x + y;
		else
			yee = 100 - x - y;

		if (yee > 0 && yee <= 30)
			cout << "sad!\n";
		else if (yee > 30 && yee <= 60)
			cout << "hmm~~\n";
		else if (yee > 60 && yee < 100)
			cout << "Happyyummy\n";
		else
			cout << "evil!!\n";
	}
}