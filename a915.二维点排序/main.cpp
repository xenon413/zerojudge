#include <iostream>
#include <algorithm>
using namespace std;

struct Sort {
	int x, y;
};

bool cmp(Sort a, Sort b) {
	if (a.x != b.x)
		return a.x < b.x;
	return a.y < b.y;
}

int main() {
	Sort a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].x >> a[i].y;
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++)
		cout << a[i].x << " " << a[i].y << endl;
	return 0;
}