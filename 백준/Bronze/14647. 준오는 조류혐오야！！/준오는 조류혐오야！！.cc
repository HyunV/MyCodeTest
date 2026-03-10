#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int arr[501][501];

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	// 가로체크
	string s;
	int maxNum = 0;
	int maxRow = 0;
	bool isSero = false;
	for (int i = 0; i < n; i++) {
		int tempNum = 0;
		for (int j = 0; j < m; j++) {
			s = to_string(arr[i][j]);
			for (char c : s) {
				if (c == '9')
					tempNum++;
			}
		}
		if (tempNum > maxNum) {
			maxNum = tempNum;
			maxRow = i;
		}
	}

	// 세로체크
	for (int i = 0; i < m; i++) {
		int tempNum = 0;
		for (int j = 0; j < n; j++) {
			s = to_string(arr[j][i]);
			for (char c : s) {
				if (c == '9')
					tempNum++;
			}
		}
		if (tempNum > maxNum) {
			isSero = true;
			maxNum = tempNum;
			maxRow = i;
		}
	}

	// 문제의 라인 삭제
	int size = m;
	if (isSero) {
		size = n;
		for (int i = 0; i < size; i++) {
			arr[i][maxRow] = 0;
		}
	}
	else {
		for (int i = 0; i < size; i++) {
			arr[maxRow][i] = 0;
		}
	}
	
	maxNum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			s = to_string(arr[i][j]);
			for (char c : s) {
				if (c == '9')
					maxNum++;
			}
		}
	}
	cout << maxNum;
}