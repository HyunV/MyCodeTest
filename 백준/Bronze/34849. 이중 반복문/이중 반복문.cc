#include <iostream>

#define LIMIT_TIME 100'000'000

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;
	cin >> n;
	if (n * n <= LIMIT_TIME) {
		cout << "Accepted";
	}
	else {
		cout << "Time limit exceeded";
	}
}