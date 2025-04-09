#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s, s2;
	cin >> n >> s; 
	s2 = "";
	for(char c : s)
	{
		if(c == 'I')
			s2+= 'i';
		else if(c == 'l')
			s2+= 'L';
	}
	cout << s2;
}