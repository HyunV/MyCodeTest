#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	string s, s2;
	string answer = "";
	while (n--) {
		cin >> s >> s2;
		if (s2 == "2026")
			answer = s;
	}
	cout << answer;
}