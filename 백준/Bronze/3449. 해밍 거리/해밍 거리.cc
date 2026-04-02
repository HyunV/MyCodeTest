#include <iostream>
#include <string>

using namespace std;

int main() {
	int num;
	cin >> num;
	string s, s2;
	while (num--) {
		cin >> s >> s2;
		int cnt = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] != s2[i]) {
				cnt++;
			}
		}
		cout << "Hamming distance is " << cnt << '.' << '\n';
	}
}