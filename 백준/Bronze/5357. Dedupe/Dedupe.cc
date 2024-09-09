#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		string answer = "";
		answer += s[0];
		char last = s[0];
		for (char c : s)
		{
			if (last == c)
				continue;
			else
			{
				last = c;
				answer += c;
			}
		}
		cout << answer << '\n';
	}
}