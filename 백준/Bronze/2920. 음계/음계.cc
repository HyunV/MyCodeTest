#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n = 8;
	char c;
	string s = "";

	string ascending = "12345678";
	string descending = "87654321";

	while (n--)
	{
		cin >> c;
		s += c;
	}
	if (s == ascending)
		cout << "ascending";
	else if (s == descending)
		cout << "descending";
	else
		cout << "mixed";
}