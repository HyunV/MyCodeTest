#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "UAPC";
	string s2;
	string answer = "";
	cin >> s2;

	for (char c : s)
		if (s2.find(c) == string::npos)
			answer += c;
		
	cout << answer;
}