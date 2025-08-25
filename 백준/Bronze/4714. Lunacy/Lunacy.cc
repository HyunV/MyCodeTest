#include<iostream>

using namespace std;

int main()
{
	double n;
	while(true)
	{
		cin >> n;

		if(n < 0)
			break;

		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", n, n * 0.167);
	}
}