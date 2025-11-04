#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Book
{
	int num=0;
	int day = 0;
};
bool cmp(Book a, Book b)
{
	return a.num <= b.num;
}
int main(void)
{
	Book book;
	vector<Book>vec;
	int n = 0, a = 0, b = 0;
	int money = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (b > 100)
		{
			book.day = b - 100;
			book.num = a;
			vec.push_back(book);
		}
	}
	if (vec.size() == 0)
	{
		cout << 0;
		goto flage;
	}
	sort(vec.begin(), vec.end(), cmp);
	
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].num;
		if (i != vec.size() - 1)
			cout << ' ';
		money += vec[i].day;
	}
	cout <<endl<< money * 5;
flage: {}
	return 0;
}