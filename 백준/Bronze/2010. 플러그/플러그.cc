#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	int sum = 0;
	for(int i = 0; i<n; i++)
	{		
		cin >> m;

		if(sum)
			sum-=1;

		sum+=m;		
	}
	cout << sum;
}