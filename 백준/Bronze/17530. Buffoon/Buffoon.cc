#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	int n, m;
	int maxNum = 0;
	cin >> n;

	while (n--)
	{
		cin >> m;
		v.push_back(m);

		maxNum = max(maxNum, m);
	}

	cout << (v[0] >= maxNum ? "S" : "N");
}