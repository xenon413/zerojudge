#include<iostream>
#include<string>
using namespace std;
int math(int a, char b, int c)
{
	switch (b)
	{
	case '+':
		return a + c;
	case '-':
		return a - c;
	case '*':
		return a * c;
	case '/':
		return a / c;
	case'%':
		return a % c;
	}
}
int main(void)
{
	int n ;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool check = false;
		string a="", front="", back="", opper="";
		cin >> a;
		for (char k : a)
		{
			if (k == '+' || k == '-' || k == '*' || k == '/' || k == '%')
			{
				opper.push_back(k);
				check = true;
			}
			else if (isdigit(k))
			{
				if (check)
					back.push_back(k);
				else
					front.push_back(k);
			}
			
		}
		//cout << stoi(front) << opper[0] << stoi(back);
		cout<<math(stoi(front),opper[0],stoi(back))<<endl;
	}
}