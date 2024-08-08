#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int answer = 0;
	
	if(s[0] == s[1])
		answer = 1;
	
	cout << answer; 
}