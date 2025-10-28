#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double h, w, n, m;
	cin >>h >> w >> n >> m;

	cout << (int)ceil(h / (n+1)) * (int)ceil(w / (m+1));
}