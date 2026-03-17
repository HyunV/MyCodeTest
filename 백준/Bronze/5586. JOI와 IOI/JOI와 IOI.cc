#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	cin >> s;
	int joi = 0;
	int ioi = 0;

	int size = s.size();
	for (int i = 0; i < size; i++) {
		if (s[i] == 'J' && i + 2 < size) {
			if (s[i + 1] == 'O' && s[i + 2] == 'I') {
				joi++;
			}
		}
		if (s[i] == 'I' && i + 2 < size) {
			if (s[i + 1] == 'O' && s[i + 2] == 'I') {
				ioi++;
			}
		}
	}
	cout << joi << '\n' << ioi;
}