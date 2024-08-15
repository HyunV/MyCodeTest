#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	getline(cin, s);

	string answer = "";
	for (char c : s)
	{
		char ch = c;

		if (c >= 'a' && c <= 'z') {
			ch = (c + 13) % ('z'+1);
			if (ch < 'a')
				ch += 'a';
		}
		else if (c >= 'A' && c <= 'Z') {
			ch = (c + 13) % ('Z' + 1);
			if (ch < 'A')
				ch += 'A';
		}		
		answer += ch;
	}

	cout << answer;
}