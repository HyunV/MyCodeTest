#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[101][101];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	string answer = "";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j][i] != '.')
				answer += arr[j][i];
		}
	}
	cout << answer;
}