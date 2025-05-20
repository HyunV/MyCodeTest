#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;

	int sum = 0;
	cin >> x >> y;
	for (int i = 0; i < x; i++)
		sum += pow(10, i);

	for (int i = 0; i < y; i++)
		sum += pow(10, i);


	cout << sum;
}