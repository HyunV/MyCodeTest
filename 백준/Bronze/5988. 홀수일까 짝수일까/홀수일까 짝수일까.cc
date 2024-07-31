#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string num;
	cin >> n;

	while (n--)
	{
		cin >> num;
		cout << ((int)(num.back() - '0') % 2 ? "odd" : "even") << '\n';
	}
}