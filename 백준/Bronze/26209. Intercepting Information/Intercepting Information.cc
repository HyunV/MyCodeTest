#include <iostream>

using namespace std;

int main()
{
	int n, m;
	n = 8;
	char answer = 'S';
	while(n--)
	{
		cin >> m;
		if(m != 0 && m != 1)	
			answer = 'F';
	}
	cout << answer;
}