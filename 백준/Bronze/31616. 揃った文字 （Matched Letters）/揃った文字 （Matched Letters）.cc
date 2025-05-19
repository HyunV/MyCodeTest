#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s >> s;
	string answer = "Yes";
	char ch = s[0];
	for(char c : s)
		if(c != ch)
			answer = "No";

	cout << answer;
}