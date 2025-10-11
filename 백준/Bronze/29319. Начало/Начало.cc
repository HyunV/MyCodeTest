#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	int maxNum = 0;
	int sum = 0;
	while(n--)
	{
		cin >> m;
		maxNum = max(maxNum, m);
		sum+= m;
	}
	cout << sum - maxNum;
}