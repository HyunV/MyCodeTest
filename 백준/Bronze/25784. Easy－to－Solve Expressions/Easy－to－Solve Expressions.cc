#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 3;
	vector<int> vec(n);
	while (n--)
		cin >> vec[n];

	sort(vec.begin(), vec.end());

	int answer = 3;
	if (vec[0] + vec[1] == vec[2])
		answer = 1;
	else if (vec[0] * vec[1] == vec[2])
		answer = 2;

	cout << answer;
}