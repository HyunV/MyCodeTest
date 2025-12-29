#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int sun, pSun, moon, pMoon;

	cin >> sun >> pSun >> moon >> pMoon;
	sun = pSun - sun;
	moon = pMoon - moon;

	while (sun != moon) {
		if (sun < moon)
			sun += pSun;
		else
			moon += pMoon;
	}
	cout << sun;
}