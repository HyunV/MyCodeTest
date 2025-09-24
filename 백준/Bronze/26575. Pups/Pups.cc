#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	cout << fixed;
	cout.precision(2);

	while(n--) {
		double d, f, p;
		cin >> d >> f >> p;
		
		double res = d * f * p;
		cout << "$" << res << "\n";
	}
}