#include <iostream>
#include <vector>
using namespace std;

int main()
{
	const int n = 4;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	bool check = (v[0] - v[2] > 1) && (v[1] - v[3] > 1);
	cout << (check ? 1 : 0) << endl;
}