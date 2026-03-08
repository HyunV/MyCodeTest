#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string res = "";
	int size = s.size();
	for (int i = 0; i < size; i++) {
		if (s[i] == 'B')
			res += 'v';
		else if (s[i] == 'E')
			res += "ye";
		else if (s[i] == 'H')
			res += 'n';
		else if (s[i] == 'P')
			res += 'r';
		else if (s[i] == 'C')
			res += 's';
		else if (s[i] == 'Y')
			res += 'u';
		else if (s[i] == 'X')
			res += 'h';
		else 
			res += s[i] ^ (1 << 5);
	}
	cout << res;
}