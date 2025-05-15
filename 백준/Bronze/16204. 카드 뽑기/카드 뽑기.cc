#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	int frontO = m;
	int frontX = n-m;

	int backO = k;
	int backX = n-k;
	
	int result =	min(frontO, backO) + min(frontX, backX);
	cout << result;
}