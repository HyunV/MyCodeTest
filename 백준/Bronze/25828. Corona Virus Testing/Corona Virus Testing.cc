#include <iostream>

using namespace std;

int main()
{
	int n, m, k;

	cin >> n >> m >> k;

	int sum = n+m*k;
	int one = n*m;
	if(one < sum)
		cout << 1;
	else if(one > sum)
		cout << 2;
	else
		cout << 0;

}