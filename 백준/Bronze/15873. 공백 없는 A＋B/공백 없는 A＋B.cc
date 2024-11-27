#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int a, b;
	if (s.size() == 3)
	{
		if (s[1] == '0')
		{
			a = stoi(s.substr(0, 2));
			b = s[2] - '0';
		}
		else if (s[2] == '0')
		{
			a = s[0] - '0';
			b = stoi(s.substr(1, 3));
		}		
	}
	else if (s.size() == 4)
	{
		a = 10;
		b = 10;
	}
	else
	{
		a = s[0] - '0';
		b = s[1] - '0';
	}

	cout << a + b;
}