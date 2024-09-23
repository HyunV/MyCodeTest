#include <iostream>

using namespace std;

int main()
{

	const int arr[4] = {56, 24, 14, 6}; 
	int sum = 0;
	int m = 0;
	
	for(int i = 0; i< 4; i++)
	{
		cin >> m;

		sum += m * arr[i];
	}

	cout << sum;
}