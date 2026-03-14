#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, s2;
	while (cin >> s >> s2) {
		int sSize = s.size();
		int idx = 0;

		bool res = false;
		for (char c : s2) {
			if (c == s[idx]) {
				idx++;

				if (idx >= sSize) {
					res = true;
					break;
				}
			}
		}
		cout << (res ? "Yes" : "No") << '\n';
	}
}