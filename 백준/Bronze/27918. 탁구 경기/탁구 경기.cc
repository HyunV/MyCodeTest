#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	int a =0, b = 0;
	char c;
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		cin >> c;
		c == 'D' ? a++ : b++;
		
		if(abs(a-b) > 1)
			break;			
	}
	cout << a << ":" << b;
}