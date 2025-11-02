#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(void)
{
	int a=0, b=0,s=0,add=0,ans=0,check=0;
	string num;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		num = to_string(i);
		s = num.size();
		if (s == 1)
		{
			check++;
			cout << num<<" ";
			continue;
		}
		else
		{
			ans = 0;

			for (int k = 0; k < s; k++)
			{
				add = num[k];
				add = add - 48;
				add = pow(add, s);
				ans = ans + add;
			}
			if (ans == i)
			{
				check++;
				cout << ans << " ";
			}
		}
	}

	if (check == 0)
	{
		cout << "none"<<endl;
	}
	else
	{
		cout << endl;
	}

}