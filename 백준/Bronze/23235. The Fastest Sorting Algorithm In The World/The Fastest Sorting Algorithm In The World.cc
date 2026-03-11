#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int n = 0;
	while (getline(cin, s) && ++n) {
		if (s == "0")
			break;

		cout << "Case " << n << ": Sorting... done!\n";
	}
}