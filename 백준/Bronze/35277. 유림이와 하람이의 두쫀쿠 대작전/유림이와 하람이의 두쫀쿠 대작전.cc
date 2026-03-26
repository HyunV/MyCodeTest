#include <iostream>
#include <string>
using namespace std;

int main() {
	const int dzc = 2000;
	int n;
	cin >> n;
	cout << ((n == 0) ? 0 : n / dzc);
}