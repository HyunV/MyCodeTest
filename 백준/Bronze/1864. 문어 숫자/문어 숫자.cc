#include <iostream>
#include <string>
#include <math.h>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<char, int> keywords;

	keywords.insert({ '/', -1 });
	keywords.insert({ '-', 0 });
	keywords.insert({ '\\', 1 });
	keywords.insert({ '(', 2 });
	keywords.insert({ '@', 3 });
	keywords.insert({ '?', 4 });
	keywords.insert({ '>', 5 });
	keywords.insert({ '&', 6 });
	keywords.insert({ '%', 7 });

	string s;

	while (true)
	{
		cin >> s;
		if (s == "#")
			break;

		int strSize = s.size();
		int sum = 0;
		for (int i = 0; i < s.size(); i++)
		{
			sum += keywords[s[i]] * pow(8, strSize-1);
			strSize--;
		}
			
	
		cout << sum << '\n';
	}
}