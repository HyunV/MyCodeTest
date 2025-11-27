#include <iostream>

using namespace std;

int main() {
	int n, m; 
	cin >> n >> m;

	int score = n ^ m;

	cout << score << '\n';
}