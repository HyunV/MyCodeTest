#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	char arr[2][26] = { { 0 } };
	// 상하 반전
	arr[0]['d' - 'a'] = 'q';
	arr[0]['b' - 'a'] = 'p';
	arr[0]['q' - 'a'] = 'd';
	arr[0]['p' - 'a'] = 'b';

	// 좌우 반전
	arr[1]['d' - 'a'] = 'b';
	arr[1]['b' - 'a'] = 'd';
	arr[1]['q' - 'a'] = 'p';
	arr[1]['p' - 'a'] = 'q';

	string answer = "";
	cin >> n >> m;

	string s;
	while (n--) {
		cin >> s;
		for (char c : s)
			answer += arr[m - 1][c-'a'];

		answer += '\n';
	}

	cout << answer;
}