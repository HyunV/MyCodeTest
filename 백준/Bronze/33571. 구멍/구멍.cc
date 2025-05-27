#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	set<char> set{
		'A','a','B','b',
		'D','d','e','g',
		'O','o','P','p',
		'Q','q','R','@' 
	};
					  		
	string s;
	getline(cin, s);

	int answer = 0;
	for (char c : s)
		if (set.find(c) != set.end())
			c == 'B' ? answer += 2 : answer += 1;
	
	cout << answer;
}