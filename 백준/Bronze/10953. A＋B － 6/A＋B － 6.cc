#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	
	string s;
	while(n--)
	{
		cin >> s;
		cout << (int)(s[0]-'0') + (int)(s[2]-'0') << '\n';		
	}
}