#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	vector<int> vec(3);
	cin >> vec[0] >> vec[1] >> vec[2];

	sort(vec.begin(), vec.end());
	cout << max(vec[2] - vec[1], vec[1] - vec[0]) - 1;
}