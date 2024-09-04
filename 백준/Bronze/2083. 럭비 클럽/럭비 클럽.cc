#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, s2;
	int n, m;
	while(true)
	{
		cin >> s >> n >> m;
		if(s == "#" && !n && !m)
			break;

		if(n > 17 || m >=80)
			s2 = "Senior";
		else
			s2 = "Junior";

		cout << s << " " << s2 << '\n';
	}	
}