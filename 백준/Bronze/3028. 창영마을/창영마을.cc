#include <iostream>
#include <string>
using namespace std;

bool arr[3] = { true, false, false };

void Shuffle(char c) {
	switch (c) {
	case 'A':
		swap(arr[0], arr[1]);
		break;
	case 'B' :
		swap(arr[1], arr[2]);
		break;
	case 'C' :
		swap(arr[0], arr[2]);
		break;
	}
}

int main() {
	string s;
	cin >> s;

	for (char c : s) {
		Shuffle(c);
	}
	for (int i = 1; i <= 3; i++) {
		if (arr[i-1]) {
			cout << i;
			break;
		}
	}
}