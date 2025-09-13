#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	n -= 2;
	int answer = k - m;
	while(n--)
		cin >> k;

	cout << k+answer;
}