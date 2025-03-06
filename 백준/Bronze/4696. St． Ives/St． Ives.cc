#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float n;
	while (cin >> n)
	{
		if (!n)
			break;

		float sum = 1.f;
		for (int i = 1; i <= 4; i++)
			sum += pow(n, i);

		printf("%.2f\n", sum);
	}

	cin >> n;
}