#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, s2;
	cin >> s;

	s2 = "";
	for(char c : s)
	{
		if(c == '.')
			break;

		s2 += c;
	}
	cout << s2;
}