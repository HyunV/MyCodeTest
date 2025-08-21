#include <iostream>
#include <cmath>
#define PI 3.141592

using namespace std;

int main()
{
	double n;
	cin >> n;
	cout << fixed;
	cout.precision(9);
	cout << sqrt(n / PI) * 2 * PI;
}