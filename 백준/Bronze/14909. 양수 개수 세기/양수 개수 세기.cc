#include <iostream>

using namespace std;

int main() {
	int n, m;
	m = 0;
	while (cin >> n) {		
		if (n > 0)
			m++;
	}
	cout << m;
}