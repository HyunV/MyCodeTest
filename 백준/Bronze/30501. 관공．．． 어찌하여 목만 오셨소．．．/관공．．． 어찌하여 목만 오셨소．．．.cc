#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s, s2;

	cin >> n;

	while(n--)
	{
		cin >> s;
		for(char c : s)
			if(c == 'S')
				s2 = s;
	}
	cout << s2;
}