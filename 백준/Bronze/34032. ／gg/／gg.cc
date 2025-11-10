#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n >> s;

	int o = 0;
	int x = 0;
	int mid = n / 2;

	if (n % 2 != 0)
		mid++;

	for (char c : s) {
		if (c == 'O')
			o++;
		else if (c == 'X')
			x++;
	}
	cout << ((o >= mid) ? "Yes" : "No");
}