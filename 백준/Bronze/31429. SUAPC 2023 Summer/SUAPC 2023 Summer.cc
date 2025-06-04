#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
	vector<pair<int, int>> vec(12);

	vec[1] = { 12, 1600 };
	vec[2] = { 11, 894 };
	vec[3] = { 11, 1327 };
	vec[4] = { 10, 1311 };
	vec[5] = { 9, 1004 };
	vec[6] = { 9, 1178 };
	vec[7] = { 9, 1357 };
	vec[8] = { 8, 837 };
	vec[9] = { 7, 1055 };
	vec[10] = { 6, 556 };
	vec[11] = { 6, 773 };

	int n;
	cin >> n;

	cout << vec[n].first << ' ' << vec[n].second;
}