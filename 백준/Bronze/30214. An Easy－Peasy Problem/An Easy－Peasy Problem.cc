#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double n, m;

	cin >> n >> m;

	if(ceil(m * 0.5f ) <= n)
		cout << "E";
	else
		cout << "H";
}