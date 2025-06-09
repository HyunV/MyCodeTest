#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int answer = 0;
	vector<int> vec(3);
	cin >> vec[0] >> vec[1] >> vec[2];

	sort(vec.begin(), vec.end());

	if (vec[0] == vec[1] && vec[0] == vec[2])
		answer = 2;
	else if (vec[0] * vec[0] + vec[1] * vec[1] == vec[2] * vec[2])
		answer = 1;
	else
		answer = 0;

	cout << answer;
}
