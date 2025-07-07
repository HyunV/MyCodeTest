#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s;

	string answer = "";

		if (s[0] == 'I')
			answer += 'E';
		else
			answer += 'I';

		if (s[1] == 'N')
			answer += 'S';
		else
			answer += 'N';

		if (s[2] == 'T')
			answer += 'F';
		else
			answer += 'T';

		if (s[3] == 'P')
			answer += 'J';
		else
			answer += 'P';

	cout << answer;
}