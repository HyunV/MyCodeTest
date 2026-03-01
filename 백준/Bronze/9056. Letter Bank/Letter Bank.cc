#include <iostream>
#include <string>
using namespace std;

int Bitmask(string& s){
	int bitmask = 0;
	for (char c : s)
		bitmask |= (1 << (c - 'A'));
	return bitmask;
}

int main() {
	int n;
	string s1, s2;
	cin >> n;
	while (n--) {
		cin >> s1 >> s2;
		int bit1 = Bitmask(s1);
		int bit2 = Bitmask(s2);
		
		cout << (bit1 == bit2 ? "YES" : "NO") << '\n';
	}
}