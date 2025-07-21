#include <iostream>

using namespace std;

int main()
{
	int p, q, a, b;
	cin >> p >> q >> a >> b;

	if(p < q)
		cout << p * a + (q-p)*b;
	else
		cout << q*a;
}