#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	
	int bitmask = 0;

	int pos = 0;
	string word = "";
	for (char c : s1) {
		pos = 1 << (c - 'A');

		// 해당 알파벳이 존재 시
		if (bitmask & pos)
			continue;
		else { // 미존재시 비트마스크, 배열에 추가
			bitmask |= pos;
			word += c;
		}
	}

	// 알파벳 미존재 시 해당 암호 추가
	for (int i = 0; i < 26; i++) {
		if (!(bitmask & (1 << i))) {
			word += i + 'A';
		}
	}

	for (char& c : s2) {
		c = word[c-'A'];
	}
	cout << s2;
}