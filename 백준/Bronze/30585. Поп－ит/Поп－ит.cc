#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a = 0, b = 0;
	string s;
	while(n--)
	{
		cin >> s;
		for(char c : s)
		{
			if(c == '1')
				a++;
			else if(c=='0')
				b++;			
		}
	}

	cout << min(a, b);
}