#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s >> s;

	if (s.size() % 2 != 0) {
		cout << "No";
		return 0;
	}

	char prev = '0';
	for (char c : s) {
		if (c == prev) {
			cout << "No";
			return 0;
		}
		prev = c;
	}
	cout << "Yes";
}