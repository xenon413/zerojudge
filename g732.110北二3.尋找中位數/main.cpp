#include <iostream>
using std::cin;
using std::max;
using std::cout;
using std::min;
int main() {
	int n, s[500] = {}, a, mx = 0, mn = 500;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &a);
		s[a - 1]++;
		/* 
				if ((a - 1) > mx)
			mx = a - 1;
		else if ((a - 1) < mn)
			mn = a - 1;
		*/
		mx = max(mx, a - 1);
		mn = min(mn, a - 1);

	}
	//cout << mx << " " << mn;
	int count = 0, i;
	for (i = mn; i <= mx; i++) {
		count += s[i];
		if (count >= (n + 1) / 2) break;
	}
	printf("%d", i + 1);
	return 0;
}