#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		// 홀수
		if(i % 2 == 0) 
			sum+= 3;
		else
			sum -= 2;
	}
	cout << sum;		
}