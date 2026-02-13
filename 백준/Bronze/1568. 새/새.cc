#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	int cnt = 0;
	while(n > 0) {
		if(n >= i) {
			n-= i++;
			cnt ++;
		} else {
			i = 1;
		}
	}
	cout << cnt;
}