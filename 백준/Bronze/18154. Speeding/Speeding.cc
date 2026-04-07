#include <iostream>
#include <math.h>

using namespace std;

int main() {
	// 속도 = (이후 거리 - 이전 거리) / (이후 시간 - 이전 시간)
	int n;
	int a, b;
	int pA = 0, pB = 0; // prev
	int maxSpeed = 0;

	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a - pA != 0) {
			maxSpeed = max(maxSpeed, (b - pB) / (a - pA));
		}
		pA = a;
		pB = b;
	}
	cout << maxSpeed;
}