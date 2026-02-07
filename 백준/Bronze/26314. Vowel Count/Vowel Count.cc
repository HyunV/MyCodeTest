#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int a = 0, b = 0;
		string s;
		cin >> s;
		for (char c : s) {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
				a++;
			}
			else
				b++;
		}
		cout << s << '\n';
		cout << (a > b ? 1 : 0) << '\n';
	}
}