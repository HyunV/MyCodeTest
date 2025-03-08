#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int m, k, birth, death;
	while(n--)
	{
		cin >> m >> k;
		birth = k / 4;
		death = k / 7;
		cout << m + birth - death << '\n';
	}	
}