#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int y, c, p;
	cin >> y >> c >> p;
	cout << min(y, min(c / 2 , p));
}