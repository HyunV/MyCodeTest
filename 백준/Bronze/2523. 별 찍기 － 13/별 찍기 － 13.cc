#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s = "";


	for (int i = 0; i < n; i++)
	{
		s += '*';
		cout << s << '\n';
	}

	for (int i = 0; i < n - 1; i++)
	{
		s.pop_back();
		cout << s << '\n';
	}
}