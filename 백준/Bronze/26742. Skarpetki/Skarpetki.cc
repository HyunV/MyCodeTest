#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s;
	int x = 0, y = 0;
	for(char c : s)
	{
		if(c == 'B')
			x++;
		else if(c =='C')
			y++;
	}

	cout << (x / 2) + (y/2);
}