#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, s2;
	cin >> s;
	while (1)
	{
		if (s.size() >= 10)
		{
			cout << s.substr(0, 10) << '\n';
			s = s.substr(10);
		}
		else
		{
			cout << s;
			break;
		}
	}
}