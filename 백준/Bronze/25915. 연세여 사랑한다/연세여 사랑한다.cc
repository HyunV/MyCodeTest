#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	char c[12] = "ILOVEYONSEI";

	char cur;
	cin >> cur;
	int answer = 0;
	for (int i = 0; i < 11; i++)
	{
		answer += abs(cur - c[i]);

		cur = c[i];
	}
	cout << answer;

}
