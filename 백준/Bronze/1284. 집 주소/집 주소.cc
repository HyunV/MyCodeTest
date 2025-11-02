#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (true) {
		cin >> s;
		if (s == "0")
			break;

		int answer = 0;
		for (char c : s) {
			if (c == '0')
				answer += 4;
			else if (c == '1')
				answer += 2;
			else
				answer += 3;
		}
		cout << answer + s.size() + 1 << '\n';
	}
}