#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	vector<string> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	cin >> m;

	switch (m) {
		case 1 :
			for (string s : vec) {
				cout << s << '\n';
			}
			break;
		case 2 : //반전
			for (string s : vec) {
				reverse(s.begin(), s.end());
				cout << s << '\n';
			}
			break;
		case 3: //상하			
			for (int i = n - 1; i >= 0; i--) {
				cout << vec[i] << '\n';
			}
			break;
	}
}