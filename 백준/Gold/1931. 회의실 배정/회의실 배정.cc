#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

bool compare(const pair<int, int>& p1, const pair<int, int>& p2)
{
	if (p1.second == p2.second)
		return p1.first < p2.first;

	return p1.second < p2.second;
};

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i].first >> vec[i].second;

	sort(vec.begin(), vec.end(), compare);

	int answer = 0;
	int lastEnd = 0;
	for (int i = 0; i < n; i++)
	{
		if (lastEnd <= vec[i].first)
		{
			lastEnd = vec[i].second;
			answer++;
		}
	}

	cout << answer;
}