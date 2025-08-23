#include <iostream>

using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;

	long long res = a+b - (2 * c);
	if(res >= 0)
		cout << res;
	else
		cout << a+b;
}