#include <iostream>
using namespace std;

int main()
{
	int A, T;
	cin >> A >> T;
	int res =  10 + 2 * (25 - A + T);
	cout << ((res < 0) ? 0 : res);
}