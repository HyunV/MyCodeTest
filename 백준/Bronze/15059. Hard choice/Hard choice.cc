#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c;
	cin >> d >> e >> f;

	int sum = 0;

	if (d - a > 0)
		sum += d-a;
	if (e - b > 0)
		sum += e-b;
	if (f - c > 0)
		sum += f-c;
	
	cout << sum;
}