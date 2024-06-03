#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;

	getline(cin, s);

	while(n--)
	{
		getline(cin, s);
		//소문자 a 97 대문자 a 65
		if(s[0] >= 'a') 
			s[0] = s[0] ^ 32;

		cout << s << '\n';
	}
}