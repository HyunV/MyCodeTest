#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, a, b, c;
	cin >> n;

	while (n--) {
		cin >> a >> b >> c;
		cout << "Data set: " << a << ' ' << b << ' ' << c << '\n';
		while (c--) {
			//a b 둘 다 0일 때
			if (!(a || b))
				break;

			(a > b) ? a /= 2 : b /= 2;
		}
		cout << max(a, b) << ' ' << min(a, b) << '\n' << '\n';
	}
}