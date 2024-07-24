#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "";

	while(getline(cin, s))
	{
		if(s == "#")
			break;

		char c = s[0];
		int answer = -1;
		for(char c : s)
			if(c == s[0] || c == (s[0]^32))
				answer++;

		cout << s[0] << ' ' << answer<<'\n';
	}
}