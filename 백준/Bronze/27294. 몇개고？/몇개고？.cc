#include <iostream>

using namespace std;

int main()
{
	int n, m;

	int answer = 0;

	cin >> n >> m;

	if (m == 1 || (n <= 11 || n >= 17))
		cout << 280;
	else
		cout << 320;
}