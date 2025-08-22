#include <iostream>

using namespace std;

int main()
{
	long long n;

	cin >> n;
	n %= 8;

	if (n == 1) 
		cout << 1 << '\n';
	else if(n == 0 || n == 2)
		cout << 2 << '\n';
	else if (n == 3 || n == 7) 
		cout << 3 << '\n';
	else if (n == 4 || n == 6) 
		cout << 4 << '\n';
	else if (n == 5) 
		cout << 5 << '\n';
}