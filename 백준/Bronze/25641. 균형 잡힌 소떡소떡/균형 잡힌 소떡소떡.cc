#include <iostream>
#include <string>
using namespace std;

bool Check(string& str) {
	int s = 0;
	int t = 0;
	
	for (char c : str) {
		c == 's' ? s++ : t++;
	}

	return s == t;
}

int main() {
	string s;

	cin >> s >> s;

	while (s.size() != 1) {
		if (Check(s)) {
			break;
		}
		else {
			s = s.substr(1, s.size());
		}
	}
	cout << s;
}