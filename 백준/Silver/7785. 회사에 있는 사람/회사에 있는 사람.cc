#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	map<string, bool, greater<string>> maps;

	string s, command;
	int n;

	cin >> n;

	while (n--)
	{
		cin >> s >> command;

		if (command == "enter")
			maps[s] = true;
		else if (command == "leave")
			maps[s] = false;
	}

	map<string, bool>::iterator iter = maps.begin();
	map<string, bool>::iterator iterEnd = maps.end();

	for (; iter != iterEnd; iter++)
	{
		if (iter->second)
			cout << iter->first << '\n';
	}
}