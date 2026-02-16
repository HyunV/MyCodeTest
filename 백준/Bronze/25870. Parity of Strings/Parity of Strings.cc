#include <iostream>
#include <string>
using namespace std;

int alpha[26];
int main() {
	string s;
	cin >> s;
	int res = 2; // 짝수 0 홀수 1
	for (char c : s) {
		alpha[c - 'a']++;
	}

	for (int i = 0; i < 26; ++i) {
		if (alpha[i] == 0)
			continue;

		if (alpha[i] % 2 == 1) { // 홀
			if (res == 0) {
				res = 2;
				break;
			}
			res = 1;
		}
		else { // 짝
			if (res == 1) {
				res = 2;
				break;
			}
			res = 0;
		}
	}
	cout << res;
}