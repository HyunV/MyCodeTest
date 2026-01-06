#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;

	unordered_set<string> uSet;
	for (int i = 0; i < n; i++) {
		cin >> s;
		uSet.insert(s);
	}

	while (--n) {
		cin >> s;
		uSet.erase(s);
	}

	cout << *uSet.begin();
}