#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	cout << static_cast<int>(max((a / b * c), (a * b / c)));
}