#include <iostream>
using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;

	if (a < 100.f)
		cout << 1;
	else
	{
		float answer = (a - (a * 0.01f * b));
		if (answer < 100.f)
			cout << 1;
		else
			cout << 0;
	}
}