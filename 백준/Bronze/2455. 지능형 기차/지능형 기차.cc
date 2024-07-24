#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	int people = 0;
	int maxNum = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> x >> y;
		people += y - x;
		maxNum = max(maxNum, people);
	}
	cout << maxNum;
}