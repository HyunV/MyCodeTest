#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s;

	int colon = 0, underbar = 0;
	for(char c : s)
	{
		if(c == ':')
			colon++;
		else if(c =='_')
			underbar++;
	}

	cout << s.size() + colon + (underbar * 5);
}