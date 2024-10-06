#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> v;

int main()
{
	int n = 8;
	int m;
	while(n--)
	{
		cin >> m;
		v.push_back(m);	
	}

	int s = v[0] + v[1] + v[2] + v[3];
	int t = v[4] + v[5] + v[6] + v[7];

	cout << max(s, t);
}