#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int table[3][2] = { {30, 40},{35,30},{40,20} };
	int n, m;
	while (cin >> n >> m) {
		if(!(n || m))
			break;
		int minNum = 2147483647;
		for (int i = 0; i < 3; i++) {
			minNum = min(minNum, n * table[i][0] + m * table[i][1]);
		}
		cout << minNum << '\n';
	}
}