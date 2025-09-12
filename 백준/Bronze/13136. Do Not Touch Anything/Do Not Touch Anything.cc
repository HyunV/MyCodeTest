#include<iostream>

using namespace std;

int main()
{
	long long r , c, n, m, k;

	cin >> r >> c >> n;

	if( r % n)
		m =  r/n + 1;
	else
		m = r/n;
	
	if( c % n)
		k = c / n + 1;
	else
		k = c / n;

	cout << m * k;
}