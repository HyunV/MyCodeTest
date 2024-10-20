#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	while (n--)
	{
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] ^= 32;
		}
		cout << s << '\n';
	}
}