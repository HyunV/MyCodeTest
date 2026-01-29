#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<long long> vec = { 0, 1, 1 };
	
	for (int i = 3; i <= n; i++)
		vec.push_back(vec[i - 1] + vec[i - 2]);

	cout << vec[n] * 4 + vec[n - 1] * 2;
}