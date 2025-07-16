#include <iostream>

using namespace std;

int main()
{
	int n = 10;
	int m;
	int answer = 0;
	while(n--)
	{
		cin >> m;
		answer+= m;
	}
	cout << answer/2;
}