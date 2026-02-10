#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	string res = "";
	if (s[0] == 'F')
		res = "Foundation";
	else if (s[0] == 'C')
		res = "Claves";
	else if (s[0] == 'V')
		res = "Veritas";
	else if (s[0] == 'E')
		res = "Exploration";

	cout << res;
}