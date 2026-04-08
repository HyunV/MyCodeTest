#include <iostream>
#include <string>
using namespace std;

// a가 이기는 기준
bool RSP(char a, char b) {
	if (a == 'R')
		return b == 'S' ? true : false;

	if (a == 'S')
		return b == 'P' ? true : false;
	
	if (a == 'P')
		return b == 'R' ? true : false;
}

int main() {
	int n;
	cin >> n;
	string s1, s2;
	int a = 0, b = 0;
	cin >> s1 >> s2;

	for (int i = 0; i < n; i++) {
		if (s1[i] == s2[i])
			continue;

		RSP(s1[i], s2[i]) ? a++ : b++;
	}

	cout << a << ' ' << b;
}