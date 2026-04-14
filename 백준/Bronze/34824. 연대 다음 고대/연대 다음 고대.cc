#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	string res = "";
	while (n--) {
		cin >> s;

		if (res == "" && s == "yonsei") {
			res = s;
		}

		if (res == "" && s == "korea") {
			res = s;
		}
	}

	cout << ((res == "yonsei") ? "Yonsei Won!" : "Yonsei Lost...");
}