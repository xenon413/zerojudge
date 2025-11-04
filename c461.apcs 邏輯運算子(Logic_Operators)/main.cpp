#include<iostream>

using namespace std;

int iAnd (int a,int b)
{
	if (a != 0 && b != 0)
		return 1;
	return 0;
}
int iOr(int a, int b)
{
	if (a == 0 && b == 0)
		return 0;
	return 1;
}
int iXor(int a, int b)
{
	if (a == 0 && b == 0)
		return 0;
	if (a != 0 && b != 0)
		return 0;
	return 1;
}
int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	if (iAnd(a, b) == c)
		cout << "AND\n";
	if (iOr(a, b) == c)
		cout << "OR\n";
	if (iXor(a, b) == c)
		cout << "XOR\n";
	if (iAnd(a, b) != c && iOr(a, b) != c && iXor(a, b) != c)
		cout << "IMPOSSIBLE";
}