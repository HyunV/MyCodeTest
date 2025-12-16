#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int num = stoi(s);
	int res = 0;

	while (num / 10) {
		int size = s.size();
		int first = s[0] - '0';
		for (int i = 1; i < size; ++i) {
			first *= s[i] - '0';
		}
		res++;
		num = first;
		s = to_string(first);
	}
	cout << res;
}