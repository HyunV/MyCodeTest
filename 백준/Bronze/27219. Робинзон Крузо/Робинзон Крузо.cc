#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int x = n / 5;
	int y = n%5;

	while(x--)
		cout << 'V';
	
	while(y--)
		cout <<'I';
}