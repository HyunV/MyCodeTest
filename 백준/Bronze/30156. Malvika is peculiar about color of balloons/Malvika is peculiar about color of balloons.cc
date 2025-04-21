#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	while (n--)
	{
		int a = 0;
		int b = 0;
		cin >> s;
		for (char c : s)
		{
			if (c == 'a')
				a++;
			else
				b++;
		}
		cout << min(a, b) << '\n';
	}
}