#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double n, m, k;
	cin >> n;
	while(n--){
        cin >> m >> k;
	cout << (int)ceil((m*m) / (k*k)) << '\n';
    }
}