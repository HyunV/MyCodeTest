#include <iostream>
using namespace std;

int main() {
	int n;
	int answer = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		if (n%i == 0)
			answer += i;
	
	cout << (answer*5) -24 << '\n';
}