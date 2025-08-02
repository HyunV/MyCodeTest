#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;
	if(n != m)
		cout << "Odd " << max(n, m) * 2;
	else if(n== 0 && m == 0)
		cout << "Not a moose";
	else
		cout <<"Even " << n * 2;
}