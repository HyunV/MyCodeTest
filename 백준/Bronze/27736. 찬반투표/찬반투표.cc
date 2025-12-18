#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n;

	// 0 : REJECTED
	// 1 : INVALID
	// 2 : APPROVED
	unsigned int arr[3] = { 0 };
	for (int i = 0; i < n; ++i) {
		cin >> m;
		arr[m + 1]++;
	}

	if ((arr[1] * 2) >= n) {
		// 무효 수가 절반 이상일 시 무효
		cout << "INVALID";
	} else if (arr[2] > arr[0]) {
		// 찬성이 반대보다 많으면 투표가 통과
		cout << "APPROVED";
	} else {
		// 반대가 찬성보다 많거나, 반대와 찬성의 수가 동일하면 투표는 통과되지 않음
		cout << "REJECTED";
	}
}