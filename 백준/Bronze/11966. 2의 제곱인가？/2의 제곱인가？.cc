#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int answer = 0;

	int sqrt = 1;
	for(int i = 0; i< 30; i++) {
		sqrt *= 2;
		
		if(n == 1 || n == sqrt) {
			answer =  1;
		}
	}
	cout << answer <<'\n';
}