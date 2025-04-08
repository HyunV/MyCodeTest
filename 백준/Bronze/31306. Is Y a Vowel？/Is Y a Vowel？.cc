#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int a = 0, b= 0;
	for(char c : s)
	{
		if(c == 'y')
			b++;
		else if(c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u')
			a++;
	}
	cout << a << ' ' << a+b;
}