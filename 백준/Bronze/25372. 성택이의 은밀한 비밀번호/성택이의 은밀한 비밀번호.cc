#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string pw;
	while (n--)
	{
		cin >> pw;

		cout << (pw.size() >= 6 && pw.size() <= 9 ? "yes\n" : "no\n");
	}
}