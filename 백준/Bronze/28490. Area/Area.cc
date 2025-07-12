#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, m, k;
	cin  >> n;
	int answer = 0;
	while(n--)
	{
		cin >> m >> k;
		answer = max(answer, m*k);
	}
	cout << answer;
}