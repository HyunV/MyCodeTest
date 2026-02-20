#include <iostream>
#include <string>
using namespace std;

int main() {
	string t = "aeiou";
	string s;
	getline(cin, s);
	string res = "";
	int size = s.size();
	for (int i = 0; i < size; i++) {
		res += s[i];
		for (char c2 : t) { // 모음일 때 
			if (s[i] == c2) {
				i += 2;
			}
		}
	}
	cout << res;
}