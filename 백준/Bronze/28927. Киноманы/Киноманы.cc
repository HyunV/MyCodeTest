#include <iostream>

using namespace std;

int main() {
	int t1, e1, f1, t2, e2, f2;
	cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;

	int maxTime = t1 * 3 + e1 * 20 + f1 *120;
	int melTime = t2 * 3 + e2 * 20 + f2 *120;

	if (maxTime > melTime) 
		cout << "Max";
	else if (maxTime < melTime)
		cout << "Mel";
	else 
		cout << "Draw";
}