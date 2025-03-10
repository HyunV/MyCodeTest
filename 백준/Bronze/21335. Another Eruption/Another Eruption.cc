#include <iostream>
#include <math.h>
#define PI 3.14159265359
using namespace std;

int main()
{
	double d;

	cin >> d;
	double r = sqrt(d / PI);
	printf("%.9f",2 * PI * r);
}