#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 0, b = 0;
	string s;
	cin >> s;

	for(char c : s)
	{
		if(c == 'A')
			a++;
		if(c == 'B')
			b++;		
	}

	cout << a <<" : "<< b;
}