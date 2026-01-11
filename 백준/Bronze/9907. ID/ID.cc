#include <iostream>
using namespace std;

int main() {
	char answer[11] = { 'J', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Z' };
	int n;
	int idx = 0;
	cin >> n;
	for (int i = 2; i <= 7; i++) {
		idx += (n % 10) * i;
		n /= 10;
	}
	idx += n * 2;

	idx %= 11;

	cout << answer[idx];
}