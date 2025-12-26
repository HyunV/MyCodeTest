#include<iostream>
using namespace std;

int main() {
	int arr[3];
	bool odd = false;
	int answer = 1;

	for (int i = 0; i < 3; ++i) {
		cin >> arr[i];
		if (arr[i] % 2 != 0) {
			answer *= arr[i];
			odd = true;
		}
	}
	cout << (odd ? answer : (arr[0] * arr[1] * arr[2]));
}