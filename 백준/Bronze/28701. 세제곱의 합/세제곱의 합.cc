#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >>n;
	int m = 0;
	for(int i= 1; i<=n; i++)
		m+= i;
	
	cout << m << '\n';
	m *= m;
	cout << m << '\n';
	cout << m << '\n';
}