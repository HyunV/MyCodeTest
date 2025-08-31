#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int w, h, n, a, b;
	cin >> w >> h >> n >> a >> b;

	int x = w / a;
	int y = h / b;

	if (a > w || b > h)
		cout << -1;
	else
		cout << (ceil((double)n / (x * y)));
}