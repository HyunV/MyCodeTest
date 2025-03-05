#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<int> vec;

int dfs(int num)
{
	if (num == 0)
		return 0;
	if (vec[num] != -1)
		return vec[num];

	int minCnt = num;

	for (int i = sqrt(num); i >= 1; i--)
	{
		int temp = i * i;
		minCnt = min(minCnt, 1 + dfs(num - temp));
	}

	return vec[num] = minCnt;
}

int main()
{
	int n;
	cin >> n;
	vec.assign(n + 1, -1);
	cout << dfs(n);
}