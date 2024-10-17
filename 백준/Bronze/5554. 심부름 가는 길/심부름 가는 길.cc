#include <iostream>

using namespace std;

int main()
{
	int n = 4;
	int m;
	int sum = 0;
	while(n--)
	{
		cin >>m;
		sum += m;		
	}

	cout << sum / 60 << '\n' <<  sum % 60;
}