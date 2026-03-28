#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s >> s;

	int size = s.size();
	bool res = s.substr(0, size / 2) == s.substr(size / 2, size);
	cout << (res ? "Yes" : "No");
	
}