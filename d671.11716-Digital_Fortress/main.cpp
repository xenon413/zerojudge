#include<iostream>
#include<math.h>
#include<string>
using namespace std;
bool isint(double num)
{
	if (num - (int)num == 0)return true;
	return false;
}
int main(void)
{
	int row,size;
	string str,ans;
	cin >> row;
	cin.ignore();
	for (int i = 0; i < row; i++)
	{
		ans = "";
		str = "";
		size = 0;
		
		getline(cin, str);
		if (isint(sqrt(str.size())))
		{
			size = sqrt(str.size());
			for (int k = 0; k < size; k++)
			{
				for (int j = k; j < size*size; j += size)
				{
					ans += str[j];
				}
			}
			cout << ans<<'\n';
		}
		else cout << "INVALID\n";
	}
	return 0;
}