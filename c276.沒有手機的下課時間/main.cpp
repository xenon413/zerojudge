#include<iostream>

using namespace std;

int main(void)
{
	string hand,guess;
	int cnt = 0, a = 0, b = 0;
	cin >> hand>>cnt;
	for (int i = 0; i < cnt; i++)
	{
		a = 0;
		b = 0;
		cin >> guess;
		for (int k = 0; k < 4; k++)
		{

			if (hand[k] == guess[k])
			{
				a++;
				continue;
			}
			else
			{
				for (int j = 0; j < 4; j++)
				{
					if (guess[k] == hand[j])
					{
						b++;
					}
				}
			}
		}
		cout << a << "A" << b << "B" << endl;
	}
}