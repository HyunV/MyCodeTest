#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;

	const string is = " is ";
	const string type[3] = {"GOOD", "A BADDY", "NEUTRAL"};

	cin >> n;
	getline(cin, s);
	while (n--)
	{
		getline(cin, s);
		int b = 0;
		int g = 0;
		for (char c : s)
		{
			if (c == 'b' || c == 'B')
				b++;
			else if (c == 'g' || c == 'G')
				g++;

		}

		if (b > g)
			cout << s << is << type[1];
		else if (b < g)
			cout << s << is << type[0];
		else
			cout << s << is << type[2];

		cout << '\n';
	}
	}