#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;

	int answer = 0;
	while (n--)
	{
		cin >> m;
		answer += m;
	}

	if (answer == 0)
		cout << "Stay";
	else if (answer >= 1)
		cout << "Right";
	else if (answer <= -1)
		cout << "Left";
}