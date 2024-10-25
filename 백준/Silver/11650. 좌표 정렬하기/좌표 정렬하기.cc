#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.first == p2.first)
		return p1.second < p2.second;
		
	return p1.first < p2.first;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> vec(n);
	while(n--)
		cin >> vec[n].first >> vec[n].second;
	
	sort(vec.begin(), vec.end());

	for (auto i : vec)
		cout << i.first << ' ' << i.second << '\n';
}