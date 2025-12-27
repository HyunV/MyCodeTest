#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int arr[3] = { 0 };
	int answer = 2147483647;

	cin >> arr[0] >> arr[1] >> arr[2];

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += abs(j - i) * arr[j] * 2;
		}
		answer = min(answer, sum);
	}
	cout << answer;
}