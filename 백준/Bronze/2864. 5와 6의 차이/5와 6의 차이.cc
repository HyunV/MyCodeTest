#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	string a1 = a, b1 = b, a2 = a, b2 = b;
	// 최소
	for (char& c : a1) {
		if (c == '6')
			c = '5';
	}

	for (char& c : b1) {
		if (c == '6')
			c = '5';
	}

	// 최대
	for (char& c : a2) {
		if (c == '5')
			c = '6';
	}

	for (char& c : b2) {
		if (c == '5')
			c = '6';
	}

	cout << stoi(a1) + stoi(b1) << ' ' << stoi(a2) + stoi(b2);
}