#include <iostream>
#include <string>
using namespace std;

int main() {
	// zilch			10 0
	// double			10 1
	// double-double	10 2
	// triple-double	10 3
	int n;
	cin >> n;
	string arr[4] = { "zilch", "double","double-double", "triple-double" };
	while (n--) {
		int cnt = 0;
		int num[3];
		for (int i = 0; i < 3; i++) {
			cin >> num[i];
			cout << num[i] << ' ';
			if (num[i] >= 10)
				cnt++;
		}
		cout << '\n' << arr[cnt] << '\n' << '\n';
	}
}