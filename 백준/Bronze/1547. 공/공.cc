#include <iostream>

using namespace std;

int main()
{
	int cup[4] = {0, 1, 0, 0};

	int n;
	cin >> n;
	int x, y;
	while(n--)
	{
		cin >> x >> y;	
		int temp = cup[x];
		cup[x] = cup[y];
		cup[y] = temp;
	}

	for(int i = 1; i<=3; i++)
		if(cup[i])
			cout << i;
	
}