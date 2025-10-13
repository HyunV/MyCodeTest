#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<char, int> map;

	map.insert({ 'A', 4 });
	map.insert({ 'K', 3 });
	map.insert({ 'Q', 2 });
	map.insert({ 'J', 1 });
	map.insert({ 'X', 0 });

	int n;
	string s;

	int res =0;

	cin >> n;
	while (n--) {
		cin >> s;

		for(char c : s) {
			res += map[c];
		}
	}
	cout << res;
}