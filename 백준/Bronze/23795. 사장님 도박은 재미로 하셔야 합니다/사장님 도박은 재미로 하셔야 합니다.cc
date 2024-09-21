#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int sum = 0;
	while(true)
	{
		cin >> n;

		if(n == -1)
			break;
		
		sum+= n;
	}
	cout << sum;
}