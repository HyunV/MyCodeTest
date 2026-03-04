#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> vec;
	vector<string> vec2;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		vec.push_back(s);
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		vec2.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << vec[i] << " as " << vec2[j] << '\n';
		}
	}
}