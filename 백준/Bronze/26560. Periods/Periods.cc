#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	while (n--)
	{
		getline(cin, s);
		if (s.back() != '.')
			s.push_back('.');

		cout << s << '\n';
	}
}