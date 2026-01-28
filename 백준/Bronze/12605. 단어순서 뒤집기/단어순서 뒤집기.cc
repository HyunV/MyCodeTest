#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
	int n;
	
	cin >> n;
	string s;
	getline(cin, s);
	for (int i = 1; i <= n; i++) {
		stack<string> stack;
		getline(cin, s);
		int size = s.size();
		string s2 = "";

		for (char c : s) {
			if (c == ' ') {
				stack.push(s2);
				s2 = "";
				continue;
			}
			s2 += c;
		}
		stack.push(s2);

		cout << "Case #" << i << ": ";
		while (!stack.empty()) {
			s2 = stack.top();
			stack.pop();
			cout << s2 << ' ';
		}
		cout << '\n';
	}
}