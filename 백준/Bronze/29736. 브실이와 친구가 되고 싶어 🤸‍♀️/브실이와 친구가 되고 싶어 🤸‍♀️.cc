#include <iostream>

using namespace std;

int main()
{
	int a, b, k, x;


	cin >> a >> b >> k >> x;
	int answer = 0;

	for (int i = k - x; i <= k + x; i++)
		if (i >= a && i <= b)
			answer++;
	
	if (answer == 0)
		cout << "IMPOSSIBLE";
	else
		cout << answer;
}