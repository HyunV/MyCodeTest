#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
			cout << ' ';
		for (int j = 0; j < (n * 2) - 1; j++) 
		{
			cout << (!(j % 2) ? '*' : ' ');			
		}
		cout << '\n';
	}
}