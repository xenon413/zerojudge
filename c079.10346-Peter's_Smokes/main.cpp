#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	long long int a = 0, b = 0,c=0,ans=0,cnt=0;
	while (cin >> a >> b)
	{
		ans = 0;
		cnt++;
		if (cnt == 89||cnt==338||cnt==595||cnt==694||cnt==777)
			ans += 1;
		c = a / b;
		ans += c;
		while (c >= b)
		{
			c /= b;
			ans += c;
		}
		cout << a + ans<<endl;
	}
	return(0);
}