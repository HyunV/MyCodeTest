#include <iostream>
#include <math.h>

using namespace std;

int arr[1001];

int main() {
	int n, m;
	cin >> n;
	int res = 0;
	while (n--) {
		cin >> m;
		res = max(res, ++arr[m]);
	}
	cout << res;
}