#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec(4);
	cin >> vec[0] >> vec[1] >> vec[2] >> vec[3];
	sort(vec.begin(), vec.end(), greater<int>());

	cout << vec[0] + vec[1] + vec[2] + 1;
}
