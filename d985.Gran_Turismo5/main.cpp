#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ave(int a,int b)
{
	int c=0,a1=0;
	a1 = a % b;
	c=(a-a1) / b;
	return(c);
}
int sec(int a,int b)
{
	int c=0;
	c = a * 60 + b;
	return(c);
}
int minM(int a)
{
	int b=0,c=0;
	b = a%60;
	c = (a - b)/60;
	return(c);
}
int minS(int a)
{
	int b = 0;
	b = a % 60;
	return(b);
}
int main(void)
{
	vector<int>re;
	int a = 0,b=0,m=0,s=0,all=0,cnt=0,ans1=0,ans2=0;
	while (cin >> a)
	{
		for (int i = 1; i <= a; i++)//track
		{
			cin >> b;
			all = 0;
			cnt = 0;
			for (int k = 0; k < b; k++)//lap
			{
				cin >> m >> s;
				re.push_back(sec(m, s));
				cnt++;
				all += sec(m, s);//plus all
				ans1 = ave(all, cnt);//ave of second
			}
			sort(re.begin(), re.end());
			
			cout << "Track " << i << ":" << endl;

			cout << "Best Lap: " << minM(re[0]) << " minute(s) ";
			cout << minS(re[0]) << " second(s)."<<endl;

			cout << "Average: " << minM(ans1) << " minute(s) ";
			cout << minS(ans1) << " second(s)."<<endl;

			re.clear();
		}
	}
	return(0);
}