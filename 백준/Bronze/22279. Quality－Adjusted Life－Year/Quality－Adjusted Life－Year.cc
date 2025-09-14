#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	double answer = 0.f;
	double q, y;
	for(int i = 0; i<n; ++i)
	{
		cin >> q >> y;
		answer += q * y;
	}

	cout << fixed;
	cout.precision(3);
	cout << answer;
}