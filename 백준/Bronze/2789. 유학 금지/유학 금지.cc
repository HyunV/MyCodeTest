#include<iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string s = "CAMBRIDGE";

	set<char> sets;

	for (char c : s)
		sets.insert(c);

	cin >> s;

	string answer = "";
	for (char c : s) {
		if (sets.insert(c).second) {
			answer += c;
			sets.erase(c);
		}			
	}
	
	cout << answer;
}