#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	string s;

	unordered_map<char, char> uMap = { {'i', 'e'},{'e', 'i'},{'I', 'E'},{'E','I'}};

	while (getline(cin, s))
	{
		for (char& c : s)
		{
			for (auto i : uMap)
			{
				if (i.first == c)
				{
					c = i.second;
					break;
				}
			}
		}

		cout << s << '\n';
	}
}