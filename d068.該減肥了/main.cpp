#include<iostream>
using namespace std;
int main(void)
{
	int n = 0;
	while (cin >> n)
	{
		if (n > 50)
		{
			cout << n - 1<<endl;
		}
		else
		{
			cout << n<<endl;
		}
		return(0);
	}
}