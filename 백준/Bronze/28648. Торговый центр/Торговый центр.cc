#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, m , k;
	cin >> n;
	int answer = 2147483647;
	while(n--)
	{
		cin >> m >> k;
		answer = min(answer, m+k);
	}
	cout << answer;
}