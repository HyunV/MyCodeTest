#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s >> s;

	bool isFind = s.find("gori") != string::npos;
	cout << (isFind ? "YES" : "NO");
}