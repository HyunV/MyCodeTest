#include <iostream>
#include <unordered_map>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	unordered_map<char, int> uMap;

	for (char c = 'A'; c < 'G'; c++)
		uMap.insert({ c, c-'A' + 10 });

	string s;
	cin >> s;
	int size = s.size()-1;
	int num = 0, sum = 0;
	for (char c : s)
	{
		if (c >= 'A' && c <= 'F')
			num = uMap[c];
		else
			num = c - '0';

		sum += num * (int)pow(16, size);
		size--;
	}
	cout << sum;
}