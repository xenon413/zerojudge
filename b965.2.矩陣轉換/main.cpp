#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void input(vector<vector<int>>& v, vector<int>& op);
void print(vector<vector<int>> v);
void flip(vector<vector<int>>& v);
void rotate(vector<vector<int>>& v);

int main() {
	vector<vector<int>> v;
	vector<int>op;
	input(v, op);
	//operate
	for (int i = op.size()-1; i >=0; i--) {
		if (op[i] == 0)
			rotate(v);
		if (op[i] == 1)
			flip(v);
	}

	print(v);
}

void input(vector<vector<int>>& v, vector<int>&op) {
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < a; i++){
		vector<int> in;
		for (int k = 0; k < b; k++) {
			int temp;
			cin >> temp;
			in.push_back(temp);
		}
		v.push_back(in);
	}

	for (int i = 0; i < c; i++) {
		int temp;
		cin >> temp;
		op.push_back(temp);
	}
}

void print(vector<vector<int>> v){
	cout << v.size() << " " << v[0].size()<<"\n";
	for (int i = 0; i < v.size(); i++) {
		for (int k = 0; k < v[i].size(); k++) {
			cout << v[i][k];
			if (k != v[i].size() - 1)
				cout << " ";
		}
		cout << "\n";
	}
}

void flip(vector<vector<int>>& v) {
	reverse(v.begin(), v.end());
}

void rotate(vector<vector<int>>& v) {
	
	vector<vector<int>> res;

	for (int i = v[0].size()-1; i >= 0; i--) {
		vector<int>in;
		for (int k = 0; k < v.size(); k++) {
			in.push_back(v[k][i]);
		}
		res.push_back(in);
	}
	v = res;
}