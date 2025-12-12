#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	double res = n / 2.0f;

	cout << (int)(res * res + 0.5f) << '\n';
}