#include <iostream>

using namespace std;

int main()
{
	float n, m;
	cin >> n >> m;

	n /= m;

	if (n >= 0.6f)
		cout << "very strong";
	else if (n >= 0.4f)
		cout << "strong";
	else if (n >= 0.2f)
		cout << "normal";
	else
		cout << "weak";
}