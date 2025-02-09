#include <iostream>

using namespace std;

int main()
{
	int N, A, B, C, D;

	cin >> N >> A >> B >> C >> D;

	while (N--)
	{
		A -= C;
		B -= D;

		if (A < 1 && B < 1)
			break;
	}

	if (N == -1)
		N = 0;

	cout << N;
}