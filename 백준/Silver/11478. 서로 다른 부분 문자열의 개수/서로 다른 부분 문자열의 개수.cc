#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<string> uSet;
	string s;
	cin >> s;

	int sSize = s.size();
	for (int strlen = 1; strlen <= sSize; strlen++)
		for (int i = 0; i <= sSize - strlen; i++)
			uSet.insert(s.substr(i, strlen));

	cout << uSet.size();
}