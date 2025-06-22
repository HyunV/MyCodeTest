#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	//
	if (n > m + 60)
	{
		cout << (m + 60) * 1500 + (n - (m + 60)) * 3000;
	}
	else
		cout << n * 1500;

}

