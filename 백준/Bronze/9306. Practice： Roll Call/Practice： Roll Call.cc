#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, s2;

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> s >> s2;

		cout << "Case " + to_string(i) + ": "+s2+ ", " + s + '\n';
	}
}