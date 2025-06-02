#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <math.h>
using namespace std;

bool compare(pair<int, string> t1, pair<int, string> t2)
{
	if (t1.first == t2.first)
	{
		return t1.second < t2.second;
	}
	return t1.first < t2.first;
}

int main()
{
	int n, m, k, a, b, c;

	vector<pair<int, string>> army;
	cin >> n >> m >> k >> a >> b >> c;

	int maxNum = max(n * a, m*b);
	maxNum = max(maxNum, k * c);

	army.push_back({ n * a , "Joffrey" });
	army.push_back({ m * b , "Robb" });
	army.push_back({ k * c , "Stannis" });

	sort(army.begin(), army.end(), compare);
	for (auto a : army)
		if (a.first == maxNum)
			cout << a.second<< ' ';	
}