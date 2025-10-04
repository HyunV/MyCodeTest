#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	if((n <= 50) && (m <= 10))
		cout << "White";
	else if (m  > 30)
		cout << "Red";
	else	
		cout << "Yellow";
}