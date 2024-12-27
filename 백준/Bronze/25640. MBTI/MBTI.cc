#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, s2;
	int n;
	int res = 0;

	cin >> s;
	cin >> n;
	
	while(n--)
	{
		cin >> s2;
		if(s == s2)
			res++;
	}
	cout << res;
}