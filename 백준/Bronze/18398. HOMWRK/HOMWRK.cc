#include <iostream>

using namespace std;

int main()
{
	int T, M, N;
	int x, y;
	cin >> T;

	while(T--)
	{
		cin >> M;
		while(M--)
		{
			cin >> x >> y;
			cout << x+y << " " << x*y << '\n';
		}
	}
	
}