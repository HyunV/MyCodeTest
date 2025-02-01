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
		int size = s.size();

		for (int i = size-1; i >= 0; i--)
		{
			cout << s[i];
		}
		cout << '\n';
	}
}