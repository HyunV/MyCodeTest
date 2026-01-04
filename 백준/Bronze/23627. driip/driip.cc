#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	const string drip = "driip";

	if (s.size() >= 5) {
		string s2 = s.substr(s.size() - 5);
		if (s2 == drip) {
			cout << "cute";
			return 0;
		}
	}
	cout << "not cute";
}