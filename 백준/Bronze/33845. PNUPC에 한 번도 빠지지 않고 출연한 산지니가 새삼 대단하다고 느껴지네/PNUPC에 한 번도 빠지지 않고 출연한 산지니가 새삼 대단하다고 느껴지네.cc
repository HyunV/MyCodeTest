#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, s2;
	bool alpha[26] = { false };
	cin >> s >> s2;

	for (char c : s) {
		alpha[c - 'a'] = true;
	}
	string res = "";
	for (char c : s2) {
		if (!alpha[c - 'a'])
			res += c;
	}
	cout << res;
}