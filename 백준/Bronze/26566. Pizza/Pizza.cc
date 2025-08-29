#include <iostream>
#include <cmath>
#define PI 3.1415926535
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, p1, r, p2;
		cin >> a >> p1 >> r >> p2;

		double slice = static_cast<double>(a / p1);
		double whole = static_cast<double>((PI * pow(r, 2)) / p2);

		if (slice > whole)
			cout << "Slice of pizza\n";
		else
			cout << "Whole pizza\n";
	}
}