#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		map<int, string> maps;

		int num;
		cin >> num;

		while (num--)
		{
			int value;
			string name;
			cin >> value >> name;
			maps.insert(make_pair(value, name));
		}

		cout << (--maps.end())->second << '\n';
	}
}