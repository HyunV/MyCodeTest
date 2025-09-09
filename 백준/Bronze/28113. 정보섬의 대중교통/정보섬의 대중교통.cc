#include <iostream>

using namespace std;

int main()
{
	int n, a, b;

	cin >> n >> a >> b;

	if (a == b && n <= b)
		cout << "Anything";
	else if(b-a > 0 && n <= b)
		cout << "Bus";
	else
		cout << "Subway";
}