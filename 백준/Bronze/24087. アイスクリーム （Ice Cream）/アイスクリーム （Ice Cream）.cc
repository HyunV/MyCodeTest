#include <iostream>

using namespace std;

int main()
{
	int s, a, b;
	cin >> s >> a >> b;

	int answer = 250;
	while (a < s)
	{
		answer += 100;
		a += b;
	}
	cout << answer;
}