#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int size = s.size();

	int a = 0, b = 0;
	for (int i = 0; i < size; i++) {
		if ((i+1) > (size / 2)) {
			b += s[i] - '0';
		}
		else {
			a += s[i] - '0';
		}
	}
	cout << ((a == b) ? "LUCKY" : "READY");
}