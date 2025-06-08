#include <iostream>

using namespace std;

int main()
{
	//10.5 -> 11  7.5 -> 8,  12
	const int a1 = (35.f / 10.f * 3.f) +1;
	const int a2 = (25.f / 10.f * 3.f) +1;
	const int a3 = 40.f / 10.f * 3.f;
	const int cutline = 55;
	int n;
	cin >> n;

	while (n--)
	{
		int num, b1, b2, b3;
		cin >> num >> b1 >> b2 >> b3;

		int sum = b1 + b2 + b3;
		cout << num << ' ' << sum << ' ';
		if (b1 >= a1 && b2 >= a2 && b3 >= a3 && sum >= cutline)
			cout << "PASS\n";
		else
			cout << "FAIL\n";
	}
}