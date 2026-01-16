#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string s = "";
	string s2 = "";
	getline(cin, s);
	while (n--) {
		getline(cin, s);

		for (char c : s) {
			if (c == ' ') {
				reverse(s2.begin(), s2.end());
				cout << s2 << ' ';
				s2 = "";
			}
			else {
				s2 += c;
			}
		}
		reverse(s2.begin(), s2.end());
		cout << s2 << '\n';
		s2 = "";
	}
}