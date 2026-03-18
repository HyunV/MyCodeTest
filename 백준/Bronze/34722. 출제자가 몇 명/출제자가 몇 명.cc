#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b, c, d;
	int res = 0;
	while (n--) {
		cin >> a >> b >> c >> d;
		if (a >= 1000 || b >= 1600 || c >= 1500 || (d <= 30 && d != -1)) {
			res++;
		}
	}
	cout << res;
}