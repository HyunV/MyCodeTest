#include <iostream>
#include <math.h>
using namespace std;

int main() {
	char c;
	int answer = 0;

	for (int i = 0; i < 16; i++) {
		cin >> c;

		// . 일 시 패스
		if (c == '.')
			continue;

		// 원래 있어야하는 위치
		int goal = c - 'A';

		answer += abs(i / 4 - goal / 4) + abs(i % 4 - goal % 4);
	}
	cout << answer;
}