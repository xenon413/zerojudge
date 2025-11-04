#include<iostream>
using namespace std;
int main(void)
{
	string a, b,pro;
	int n,A=0,B=0;
	cin >> a >> n;
	for (int k = 0; k < n; k++)
	{
		pro = a;
		cin >> b;
		for (int i = 0; i < b.size(); i++)
		{
			if (pro[i] == b[i])
			{
				A++;
				pro[i] = 'a';
				b[i] = 'b';
			}
		}
		for (int i = 0; i < pro.size(); i++)
		{
			for (int j = 0; j < b.size(); j++)
			{
				if (pro[i] == b[j])
				{
					pro[i] = 'a';
					b[j] = 'b';
					B++;
				}
			}
		}
		cout << A << "A" << B << "B\n";
		A = B = 0;
	}
}