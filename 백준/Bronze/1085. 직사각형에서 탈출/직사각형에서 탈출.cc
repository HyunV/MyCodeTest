#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x, y, w, h;
	int up, down, left, right;
	cin >> x >> y >> w >> h;

	up = h;
	down = 0;
	left = 0;
	right = w;
	
	cout << min({ up - y, y - down, x - left, right - x });
}