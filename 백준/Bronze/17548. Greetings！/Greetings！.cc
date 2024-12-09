#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int size = (s.size() -2) * 2;

	string s2 = "h";
	while(size--)
	{
		s2.push_back('e');
	}
	s2.push_back('y');

	cout << s2;
}