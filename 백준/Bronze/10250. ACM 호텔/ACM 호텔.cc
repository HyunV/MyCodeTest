#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int T, H, W, N;

	cin >> T;

	while (T--)
	{
		cin >> H >> W >> N;
		N--;
		int ho = N / H;
		int floor = N % H;

		cout << floor + 1;

		if (++ho / 10 == 0)
			cout << '0';

		cout << ho << '\n';
	}
}