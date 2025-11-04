#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	if (c == "yes")
		cout << a << "想和" << b << "絕交";
	else
		cout << a << "不想和" << b << "絕交";
}