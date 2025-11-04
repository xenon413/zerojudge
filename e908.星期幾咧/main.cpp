#include<iostream>
using namespace std;
int day(string a)
{
	if (a == "Monday")
		return(1);
	if (a == "Tuesday")
		return(2);
	if (a == "Wednesday")
		return(3);
	if (a == "Thursday")
		return(4);
	if (a == "Friday")
		return(5);
	if (a == "Saturday")
		return(6);
	if (a == "Sunday")
		return(7);
}
string english(int a)
{
	if (a == 0)
		return("Sunday");
	if (a == 1)
		return("Monday");
	if (a == 2)
		return("Tuesday");
	if (a == 3)
		return("Wednesday");
	if (a == 4)
		return("Thursday");
	if (a == 5)
		return("Friday");
	if (a == 6)
		return("Saturday");
}
int main(void)
{
	string n,m;
	long long int a = 0, b = 0;
	while (cin >> n)
	{
		cin >> a;
		b = a + day(n);
		b = b % 7;
		m = english(b);
		cout << m<<endl;
	}
	return(0);
}