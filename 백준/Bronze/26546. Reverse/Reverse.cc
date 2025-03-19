#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, x, y;
	string s;

	cin >> n;
	while (n--)
	{
		cin >> s;
		cin >> x >> y;	
		cout << s.erase(x, y-x) << '\n';
	}
}