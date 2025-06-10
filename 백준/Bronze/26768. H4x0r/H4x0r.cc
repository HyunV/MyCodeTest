#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s;

	for(char& c : s)
	{
		if(c == 'a')
			c = '4';
		else if(c=='e')
			c = '3';
		else if(c=='i')
			c= '1';
		else if(c=='o')
			c= '0';
		else if(c=='s')
			c = '5';
	}
			cout << s;

}