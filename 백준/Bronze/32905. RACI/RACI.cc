#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	string s;
	string res = "Yes";
	getline(cin, s);
	while (n--) {
		int a = 0;
		getline(cin, s);
		for (char c : s) {
			if (c == 'A')
				a++;
		}

		if (a != 1)
			res = "No";
	}
	cout << res;
}