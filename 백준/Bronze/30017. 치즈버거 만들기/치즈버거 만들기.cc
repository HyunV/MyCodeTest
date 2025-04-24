#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	if(n >m)
		cout << (m*2)+1;
	else
		cout << (n*2)-1;
}