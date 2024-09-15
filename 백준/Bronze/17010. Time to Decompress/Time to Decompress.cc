#include <iostream>

using namespace std;

int main()
{
	int n, m;
	char c;
	cin >> n;
	while(n--)
	{
		string s = "";
		cin >> m >> c;
		while(m--)
			s += c;

		cout << s << '\n';
	}
}