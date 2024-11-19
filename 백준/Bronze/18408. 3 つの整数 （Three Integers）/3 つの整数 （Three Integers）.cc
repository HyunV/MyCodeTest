#include <iostream>
using namespace std;

int main()
{
	const int n = 3;
	int m;
	int one = 0, two = 0;

	for(int i = 0; i< n; i++)
	{
		cin >> m;
		if( m== 1)
			one++;
		else if(m == 2)
			two++;
	}

	cout << ((one > two) ? 1 : 2);
}