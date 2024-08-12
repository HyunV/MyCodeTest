#include<iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string s;

	set<char> sets;

	sets.insert('C');
	sets.insert('A');
	sets.insert('M');
	sets.insert('B');
	sets.insert('R');
	sets.insert('I');
	sets.insert('D');
	sets.insert('G');
	sets.insert('E');

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