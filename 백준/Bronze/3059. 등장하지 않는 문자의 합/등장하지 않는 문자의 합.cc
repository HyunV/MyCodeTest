#include <iostream>
#include <string>

using namespace std;

int main() {
	const int cnt = 26;
	int n;
	string s;
	cin >> n;
	while (n--) {
		int answer = 0;
		cin >> s;
		int alphabet = 0; //비트마스킹
		for (char c : s) {
			int bit = c - 'A';
			alphabet |= (1 << bit);
		}

		for (int i = 0; i < cnt; ++i)
			if ((alphabet & (1 << i)) == 0)
				answer += (i + 'A');

		cout << answer << '\n';
	}
}