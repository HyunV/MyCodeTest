#include <iostream>
#include <stack>

using namespace std;

int main() {
	int m, n;
	char arr[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	stack<int> stack;
	cin >> m >> n;
	if (!m) {
		cout << 0;
		return 0;
	}

	else {
		while (m) {
			stack.push(m % n);
			m /= n;
		}
		while (!stack.empty()) {
			cout << arr[stack.top()];
			stack.pop();
		}
	}
}