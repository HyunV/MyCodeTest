#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	int size = s1.size();
	int size2 = s2.size();

	int res = 0;
	if (size >= size2) {
		for (int i = 0; i < size; i++) {
			if (s2 == s1.substr(i, size2)) {
				res++;
				i += size2 - 1;
			}
		}
	}
	cout << res;
}