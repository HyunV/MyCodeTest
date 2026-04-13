#include <iostream>
#include <string>
using namespace std;

int main() {
	string key = "qwertyuiopasdfghjklzxcvbnm";

	string s;
	getline(cin, s);
	getline(cin, s);
	string res = "";
	for (char c : s) {
		if (c == ' ') { 
			res += ' ';
		}
		else {
			res += key[c - 'a'];
		}
	}
	cout << res;
}