#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i < 11; i++) {
		if (n <= i * i) {
			cout << i << ' ' << i;
			break;
		}
		if (n <= i * (i + 1)) {
			cout << i << ' ' << i + 1;
			break;
		}
	}
}