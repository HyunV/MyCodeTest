#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int m, sum, minNum;
	while(n--)
	{
		sum = 0;
		minNum = 101;
		for(int i = 0; i<7; i++)
		{
			cin >> m;
			if(m %2 == 0)
			{
				minNum = min( minNum, m);
				sum+= m;
			}
		}
		cout << sum << ' '<<minNum <<'\n';
	}
}