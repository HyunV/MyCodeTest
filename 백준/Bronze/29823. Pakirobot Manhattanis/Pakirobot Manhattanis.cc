#include <iostream>
#include <unordered_map>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	unordered_map<char, pair<int, int>> umap;
	
	umap.insert({ 'N', { 1, 0 } });
	umap.insert({ 'E', { 0, 1 } });
	umap.insert({ 'S', { -1, 0 } });
	umap.insert({ 'W', { 0, -1 } });

	pair<int, int> dir = { 0, 0 };

	string s;

	cin >> s >> s;

	for (char c : s)
	{
		dir.first += umap[c].first;
		dir.second += umap[c].second;
	}

	cout << abs(dir.first) + abs(dir.second);
}