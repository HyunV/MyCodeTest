#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, s2;
	cin >> s >> s >> s2;

	int size = s.size();
	int res = 0;
	for (int i = 0; i < size; i++) {
		if (s[i] != s2[i]) {
			res++;
		}
	}
	cout << res;
}