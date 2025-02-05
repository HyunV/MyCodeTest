#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	string s, s2;
	unordered_map<string, string> uMap;
	while (n--)
	{
		cin >> s >> s2;
		uMap.insert({ s, s2 });
	}
	while (m--)
	{
		cin >> s2;
		cout << uMap[s2] << '\n';
	}
}