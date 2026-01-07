#include <iostream>
#include <string>

using namespace std;

int main() {
	bool alpha[26] = { false };
	string s, s2;
	cin >> s;

	// 문자 1개 무시, s를 읽고 \n이 버퍼에 남아있어서 getline 할 때 공백이 나옴
	cin.ignore(); 
	getline(cin, s2);

	for (char c : s2) {
		if (c != ' ') {
			alpha[c - 'A'] = true;
		}
	}

	for (char& c : s) {
		if (c >= 'A' && c <= 'Z') {
			if (alpha[c - 'A']) {
				c ^= 32;
			}
		}
	}

	cout << s;
}