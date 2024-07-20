#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	string answer ="";
	cin >> s;
	for(char c : s)
		if(c >= 'A' && c<= 'Z')
			answer+= c;

	cout << answer;
}