#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int maxNum=-1, minNum=1001;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		maxNum = max(maxNum, num);
		minNum = min(minNum, num);
	}
	cout << maxNum - minNum;
}