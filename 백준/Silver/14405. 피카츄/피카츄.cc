#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string s2 = "";

	cin >> s;
	int size = s.size();
	bool res = true;
	for (char c : s) {
		s2 += c;
		if (s2.size() == 2) {
			if (s2 == "pi" || s2 == "ka") {
				s2 = "";
				continue;
			}
		}
		if (s2.size() == 3) {
			if (s2 == "chu") {
				s2 = "";
			}
			else {
				res = false;
				break;
			}
		}
	}
	cout << (s2.size() == 0  && res ? "YES" : "NO");
}