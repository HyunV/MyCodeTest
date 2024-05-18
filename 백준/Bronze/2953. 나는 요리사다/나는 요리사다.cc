#include <iostream>

using namespace std;

int main()
{
	int cook = 5;

	int winner = 0, maxPoint = 0, num = 0, sum = 0;
	for (int i = 1; i <= cook; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> num;
			sum += num;
		}

		if (sum > maxPoint)
		{
			winner = i;
			maxPoint = sum;
		}
	}

	cout << winner << '\n';
	cout << maxPoint;
}