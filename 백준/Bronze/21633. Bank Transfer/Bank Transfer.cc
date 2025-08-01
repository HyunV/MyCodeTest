#include <iostream>

using namespace std;

int main()
{
	double n;
	cin >> n;

	n =  25 + n * 0.01f;
	cout.precision(2);
	cout << fixed;
	
	if(n <= 100)
		cout << "100.00";
	else if(n >= 2000.0)
		cout << "2000.0";
	else
		cout << n;
}