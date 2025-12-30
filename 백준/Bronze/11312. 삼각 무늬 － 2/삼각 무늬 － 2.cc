#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double n, m, k;
	cin >> n;
	while(n--) {
		cin >> m >> k;
		cout << (long long)ceil(m/k * m/k) << '\n';
	}
}