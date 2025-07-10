#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int answer = (n + m) % 12;
	if (answer == 0)
		answer = 12;

	cout << answer;
}