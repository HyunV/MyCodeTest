#include <iostream>

using namespace std;

int main()
{
	int N, M;

	cin >> N;

	while (N--)
	{
		cin >> M;
		cout << "Pairs for " << M << ":";
		for (int i = 1; i <= M; i++)
		{
			if (M - i <= 0 || i >= M-i )
				break;

			if (i > 1)
				cout << ',';

			cout << ' ' << i << ' ' << M - i;
				
		}
		cout << '\n';
	}
}