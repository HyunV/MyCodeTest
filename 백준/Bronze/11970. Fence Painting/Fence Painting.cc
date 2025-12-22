#include <iostream>
using namespace std;
int main() {
	int arr[4];
	int answer = 0;
	int fence[101] = { 0 };

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	for (int i = arr[0]; i < arr[1]; ++i) {
		fence[i]++;
	}

	for (int i = arr[2]; i < arr[3]; ++i) {
		fence[i]++;
	}

	for (int i = 0; i <= 100; ++i) {
		if (fence[i])
			answer++;
	}
	cout << answer;
}