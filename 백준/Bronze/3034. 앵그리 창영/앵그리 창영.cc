#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, w, h, m, maxNum;
	cin >> n >> w >> h;

	maxNum = sqrt((w * w) + (h * h));
	
	for(int i = 0; i<n; i++)	{
		cin >> m;
		if(m <= maxNum)
			cout << "DA" << '\n';
		else
			cout << "NE" << '\n';			
	}
}