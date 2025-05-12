#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s >> s;
	
	//J -> O
	//O -> I
	//I -> J
	string s2 = "";
	for(char c : s)
	{
		if(c == 'J')
			s2+='O';
		else if(c=='O')
			s2+='I';
		else
			s2+='J';
	}
	cout << s2;
}