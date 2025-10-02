#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	a+= c;
	b += d;

	if( a < b)
		cout << "Hanyang Univ.";
	else if(a > b)
		cout << "Yongdap";
	else if( a == b)
		cout << "Either";
}