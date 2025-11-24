#include <iostream>
using namespace std;

int main(){
	long long n; 
	cin >> n;
	int res = 1;

	while (n != 1) {
		res++;
		if (n & 1) 
			n = n * 3  + 1;
		else 
			n /= 2;
    	}
	cout << res;
}